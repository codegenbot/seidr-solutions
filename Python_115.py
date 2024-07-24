def max_fill(grid, capacity):
    n = len(grid)
    res = 0
    for i in range(n):
        while sum(grid[i]) > 0:
            bucket_space = min(capacity, sum([grid[i][j] for j in range(len(grid[i]))]))
            grid[i] = [k - bucket_space if k > 0 else 0 for k in grid[i]]
            res += 1
    return res