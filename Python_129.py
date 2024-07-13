def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    dp = [[float("inf")] * (n + 1) for _ in range(n + 1)]
    dp[0][0] = grid[0][0]
    queue = [(grid[0][0], [(0, 0)], 1)]

    while queue:
        cell, path, length = queue.pop(0)

        if length == k:
            return sorted(path)

        for x, y in [
            (cell - 1, cell),
            (cell + 1, cell),
            (cell, cell - 1),
            (cell, cell + 1),
        ]:
            if 0 <= x < n and 0 <= y < n:
                if dp[x][y] > grid[x][y] + cell:
                    dp[x][y] = grid[x][y] + cell
                    queue.append((dp[x][y], path + [(x, y)], length + 1))

    return []