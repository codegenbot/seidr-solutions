def minPath(grid, k):
    n = len(grid)
    for _ in range(k):
        cur_min = float("inf")
        min_val = float("inf")
        for i in range(n):
            for j in range(n):
                if grid[i][j] < min_val:
                    min_val = grid[i][j]
        res.append(min_val)
        for i in range(n):
            for j in range(n):
                if grid[i][j] == min_val:
                    grid[i][j] = float("inf")
    return res