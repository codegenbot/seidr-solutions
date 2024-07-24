def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = [(grid[0][0], [grid[0][0]])
    result = []
    
    while queue:
        val, path = queue.pop(0)
        if len(path) == k+1:
            return path
        
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                visited[nx][ny] = True
                queue.append((grid[nx][ny], path + [grid[nx][ny]]))
                
        visited[x][y] = False
        
    return []