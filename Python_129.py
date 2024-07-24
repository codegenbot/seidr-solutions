def shortestPath(grid):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    min_path_length = float('inf')
    
    def dfs(x, y, current_path):
        nonlocal min_path_length
        if len(current_path) > k:
            return
        
        if len(current_path) == k and len(set(current_path)) == k:
            min_path_length = min(min_path_length, len(current_path))
        
        visited[x][y] = True
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                dfs(nx, ny, current_path + [grid[nx][ny]])
        
        visited[x][y] = False
    
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                dfs(i, j, [grid[i][j]])
    
    return min_path_length