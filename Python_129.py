```
def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        nonlocal res
        if path:
            if len(path) >= k:
                res.append(path)

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path + [grid[ni][nj]])

    for i in range(n):
        for j in range(n):
            dfs(i, j, [])

    return min(res) if res else None