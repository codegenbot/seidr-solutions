```
def minPath(grid, k):
    n = len(grid)
    m = [[i*j for j in range(1, n+1)] for i in range(1, n+1)]
    
    visited = set()
    stack = [(0, 0, [m[0][0]])]
    res = []
    
    while stack:
        x, y, path = stack.pop()
        
        if len(path) == k:
            if not res or tuple(sorted(path)) < tuple(sorted(res)):
                res = path
            continue
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            
            if 0 <= nx < n and 0 <= ny < n and m[nx][ny] not in visited:
                stack.append((nx, ny, path + [m[nx][ny]]))
                visited.add(m[nx][ny])
    
    return res