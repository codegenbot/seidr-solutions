def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for i in range(n)] for j in range(n)]
    res = []
    visited = set()
    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return True
        if (i, j) in visited or i < 0 or j < 0 or i >= n or j >= n:
            return False
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                if m[ni][nj] not in path:
                    visited.add((i, j))
                    dfs(ni, nj, path + [m[ni][nj]])
                    visited.remove((i, j))
        return False
    for i in range(n):
        for j in range(n):
            dfs(i, j, [])
    return res