def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    dp = [[float("inf")] * (n + 1) for _ in range(n + 1)]
    dp[0][0] = grid[0][0]

    visited = set()
    queue = [(0, [m[0][0]], 1)]
    result = []

    while queue:
        cell, path, length = queue.pop(0)

        if length == k:
            if not visited:
                result = sorted(path)
                visited.add(tuple(result))
            continue

        for x, y in [
            (cell - 1, cell),
            (cell + 1, cell),
            (cell, cell - 1),
            (cell, cell + 1),
        ]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                dp[x][y] = min(dp[x][y], dp[cell][cell] + m[x][y])
                queue.append((y, path + [m[x][y]], length + 1))

    return result