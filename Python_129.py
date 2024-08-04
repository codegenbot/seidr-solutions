def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
  
    def dfs(x, y, path):
        if len(path) == 2 * n:
            return path
        
        min_path = []
  
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] < k:
                new_path = dfs(nx, ny, path + [grid[nx][ny]])
                if len(new_path) > len(min_path):
                    min_path = new_path
        
        return min_path
  
    min_path = []
  
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if len(path) > len(min_path):
                min_path = path
  
    return min_path