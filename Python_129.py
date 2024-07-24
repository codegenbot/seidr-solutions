def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path=None, visited=set()):
        if path is None:  
            path = []
        if len(path) == k:
            return [path]
        visited.add((i, j))
        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                res.extend(dfs(ni, nj, path + [m[ni][nj]], visited))
        return res

    res = dfs(0, 0)
    return (
        min(
            [x[:k] for x in res if len(x) == k],
            key=lambda x: sum(grid[i][j] for i, j in zip(x, range(k))),
        )
        if res
        else []
    )