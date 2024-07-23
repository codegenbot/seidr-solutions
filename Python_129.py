```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return False
        if (i, j) in [(i2, j2) for i2 in range(n) for j2 in range(n)]:
            visited[i][j] = True
            for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                ni, nj = i + x, j + y
                if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                    dfs(ni, nj, path+[grid[ni][nj]])
            visited[i][j] = False
        return True

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                dfs(i, j, [grid[i][j]])

    return res