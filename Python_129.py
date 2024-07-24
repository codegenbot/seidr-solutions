```
def minPath(grid, k):
    n = len(grid)
    res = float("inf")

    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            total_cost = sum(x * y for x, y in zip(path, grid[0]))
            res = min(res, total_cost)
            return
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path + [(ni, nj)])

    dfs(0, 0, [])
    return res