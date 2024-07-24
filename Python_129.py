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
        x[:k]
        for x in sorted(
            [
                (i + dx, j + dy)
                for i in range(n)
                for j in range(n)
                for dx in (-1, 0, 1)
                for dy in (-1, 0, 1)
                if 0 <= i + k < n and 0 <= j + dx * k < n
            ],
            key=lambda x: (x[0], x[1]),
        )[:k]
    ]