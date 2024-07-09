def minPath(grid, k):
    n = len(grid)
    res = float("inf")
    directions = [(0, 1), (0, -1), (-1, 0), (1, 0)]

    def dfs(i, j, path, dist):
        nonlocal res
        if len(path) == k:
            res = min(res, sum(path))
            return

        for x, y in directions:
            new_i, new_j = i + x, j + y
            if 0 <= new_i < n and 0 <= new_j < n and grid[new_i][new_j] not in path:
                dfs(
                    new_i, new_j, path + [grid[new_i][new_j]], dist + grid[new_i][new_j]
                )

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]], grid[i][j])

    return res