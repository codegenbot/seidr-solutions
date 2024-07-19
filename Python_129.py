def minPath(grid, k):
    n = len(grid)
    start_val = min(min(row) for row in grid)
    start_pos = [(i, j) for i in range(n) for j in range(n) if grid[i][j] == start_val][
        0
    ]
    path = [start_val]

    while len(path) < k:
        i, j = start_pos
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        next_val = float("inf")
        next_pos = None

        for ni, nj in neighbors:
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] < next_val:
                next_val = grid[ni][nj]
                next_pos = (ni, nj)

        path.append(next_val)
        start_pos = next_pos

    return path