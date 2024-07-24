def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n - k + 1):
        for j in range(n - k + 1):
            total = sum([grid[x][j] for x in range(i, i + k)])
            if not res or total < min(
                [sum([grid[x][j] for x in range(y1, y2)]) for y1, y2 in res]
            ):
                res = [(i, j)]
            elif total == min(
                [sum([grid[x][j] for x in range(y1, y2)]) for y1, y2 in res]
            ):
                res.append((i, j))
    return [
        [grid[i][j] for i in range(x) for j in (y,) if 0 <= i < k and 0 <= y - j < k]
        for x, y in sorted(res)
    ]