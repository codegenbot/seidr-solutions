def minPath(grid, k):
    n = len(grid)
    min_path = []

    for i in range(n):
        for j in range(n):
            if (
                (i == 0 and j == 0)
                or (i == 0 and j == n - 1)
                or (i == n - 1 and j == 0)
                or (i == n - 1 and j == n - 1)
            ):
                min_path.append(grid[i][j])

    return min_path