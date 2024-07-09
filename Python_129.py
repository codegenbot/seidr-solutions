def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    
    def dfs(x, y, curr_sum, path):
        curr_sum += grid[x][y]
        path = path + [grid[x][y]]  # Make a copy of the path list before appending
        
        if curr_sum >= k:
            return path
        
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                new_path = dfs(nx, ny, curr_sum, path)
                if new_path:
                    return new_path
    
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, 0, [])
            if path:
                return path