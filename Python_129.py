def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        min_val = float("inf")
        min_path = None

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] < min_val:
                min_val = grid[ni][nj]
                min_path = (ni, nj)

        return dfs(min_path[0], min_path[1], path + [min_val])

    start_val = min(min(min(row) for row in grid))
    start_pos = [(i, j) for i in range(n) for j in range(n) if grid[i][j] == start_val][
        0
    ]

    return dfs(start_pos[0], start_pos[1], [start_val])