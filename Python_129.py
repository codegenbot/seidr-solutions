def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    dp = [[float("inf")] * (n + 1) for _ in range(n + 1)]
    dp[0][0] = m[0][0]

    queue = [(m[0][0], [m[0][0]], 1)]
    result = []

    while queue:
        value, path, length = queue.pop(0)

        if length == k:
            if not any(x > value for x in dp):
                result = sorted(path)
            continue

        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            x, y = divmod(cell := cell + dx, n) + (cell // n,)
            if 0 <= x < n and 0 <= y < n and dp[x][y] > value + m[x][y]:
                queue.append((value + m[x][y], path + [m[x][y]], length + 1))
                dp[x][y] = value + m[x][y]

    return result