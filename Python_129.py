def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(x, y, curr_sum, path):
        curr_sum += grid[x][y]
        path.append(grid[x][y])

        if curr_sum >= k:
            return path

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                new_path = dfs(nx, ny, curr_sum, path)
                if new_path:
                    return new_path
        
        path.pop()  # Backtrack by removing the last element from the path before returning None
        return None

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, 0, [])
            if path:
                return path