def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        min_val = float("inf")
        next_cell = None

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] < min_val:
                min_val = grid[nx][ny]
                next_cell = (nx, ny)

        return dfs(next_cell[0], next_cell[1], path + [min_val])

    start_val = min(min(row) for row in grid)
    start_pos = [(i, j) for i in range(n) for j in range(n) if grid[i][j] == start_val][
        0
    ]

    return dfs(start_pos[0], start_pos[1], [start_val])