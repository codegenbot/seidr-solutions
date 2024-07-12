```
def minPath(grid, k):
    n = len(grid)
    m = [[i*j for j in range(1, n+1)] for i in range(1, n+1)]
    visited = set()
    queue = [(0, [m[0][0]], 0)]
    res = []
    
    while queue:
        x, path, step = queue.pop(0)
        if step == k:
            res = path
            break
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x+dx, y+dy
            if 1 <= nx < n and 1 <= ny < n and (nx, ny) not in visited:
                queue.append((nx, path+[m[nx][ny]], step+1))
                visited.add((nx, ny))
                
    return res