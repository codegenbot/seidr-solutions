def minPath(grid, k):
    n = len(grid)
    for _ in range(k):
        for i in range(n):
            for j in range(n):
                if grid[i][j] < n * n:
                    grid[i][j] += 1
                else:
                    grid[i][j] = 0
    return [i * n + j for i in range(n) for j in range(n) if grid[i][j]]