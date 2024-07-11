def minPath(grid, k):
    n = len(grid)
    res = []
    for _ in range(k):
        cur_min = float("inf")
        for i in range(n):
            for j in range(n):
                if abs(sum(grid[i]) - grid[i][j]) + abs(sum([grid[m][j] for m in range(n)])) < cur_min:
                    cur_min = abs(sum(grid[i]) - grid[i][j]) + abs(sum([grid[m][j] for m in range(n)]))
        res.append(cur_min)
    return res