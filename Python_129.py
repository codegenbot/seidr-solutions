Here is the solution:

def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False]*m for _ in range(n)]
    queue = [(0, 0, [grid[0][0]], 1)]
    res = []
    
    while queue:
        x, y, path, length = queue.pop(0)
        
        if length > k:
            continue
        
        if length == k:
            res.append(path)
            continue
        
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            nx, ny = x + dx, y + dy
            
            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue
                
            if visited[nx][ny]:
                continue
                
            queue.append((nx, ny, path + [grid[nx][ny]], length + 1))
            visited[nx][ny] = True
    
    return min(res)