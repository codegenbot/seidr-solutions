def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return True

        if (i, j) in visited or m[i][j] < 1 or m[i][j] > n * n:
            return False

        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path + [m[i][j]])
        visited.remove((i, j))

    for i in range(n):
        for j in range(n):
            dfs(i, j, [])

    return res