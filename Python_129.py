```
def minPath(grid, k):
    m = len(grid)
    res = []
    visited = [[False]*m for _ in range(m)]
    queue = [(0, 0, [grid[0][0]])]
    
    while queue:
        x, y, path = queue.pop(0)
        if len(path) == k+1:
            if not res or tuple(sorted(path)) < tuple(sorted(res)):
                res = list(path[:-1])
            continue
        
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x+dx, y+dy
            if 0<=nx<m and 0<=ny<m and not visited[nx][ny]:
                queue.append((nx, ny, path+[grid[nx][ny]]))
                visited[nx][ny] = True
    
    return res