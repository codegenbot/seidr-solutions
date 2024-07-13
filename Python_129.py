def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    res = []

    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = sorted(path)
            return True

        if (i, j) in visited or m[i][j] < min(m[0][0], m[-1][-1]):
            return False

        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                if dfs(ni, nj, path + [m[i][j]]):
                    return True

        visited.remove((i, j))
        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, []):
                return res