```
def minPath(grid, k):
    n = len(grid)
    res = float("inf")

    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = min(res, sum([grid[0][x] for x in path]))
            return
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path + [(ni, nj)])

    dfs(0, 0, [])
    return [x for x in [res]]