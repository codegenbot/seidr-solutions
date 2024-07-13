```
def shortestPathBinaryMatrix(grid):
    n = len(grid)
    m = len(grid[0])
    
    if grid[0][0] == 1 or grid[n-1][m-1] == 0:
        return -1
    
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)] + \
                 [(1, 1), (-1, -1), (1, -1), (-1, 1)]
    
    queue = [(0, 0, 0)]
    visited = [[False]*m for _ in range(n)]
    visited[0][0] = True
    
    while queue:
        x, y, step = queue.pop(0)
        
        if x == n-1 and y == m-1:
            return step
        
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and grid[nx][ny] == 0:
                queue.append((nx, ny, step+1))
                visited[nx][ny] = True
    
    return -1