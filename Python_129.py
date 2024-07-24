def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    queue = [(0, 0, [])]
    res = []
    
    while queue:
        i, j, path = queue.pop(0)
        
        if len(path) == k:
            res = path
            break
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i+dx, j+dy
            
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                queue.append((ni, nj, path+[grid[ni][nj]]))
    
    return res