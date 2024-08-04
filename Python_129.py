def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        min_val = float("inf")
        min_path = []

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] < min_val:
                min_val = grid[nx][ny]
                min_path = dfs(nx, ny, path + [min_val])

        return min_path

    min_val = float("inf")
    min_path = []

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path < min_path:
                min_path = path

    return min_path