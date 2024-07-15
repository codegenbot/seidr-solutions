def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    res = []

    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = min(res, path) if not res else res
            return

        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and m[x][y] not in visited:
                visited.add(m[x][y])
                dfs(x, y, path + [m[x][y]])
                visited.remove(m[x][y])

    for i in range(n):
        for j in range(n):
            visited = set()
            dfs(i, j, [m[i][j]])

    return res