```
def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if i == n - 1:
            return [path]

        paths = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            newi, newj = i + x, j + y

            if 0 <= newi < n and 0 <= newj < n:
                if grid[newi][newj] not in path:
                    paths.extend(dfs(newi, newj, path + [grid[newi][newj]]))

        return sorted([x for x in paths if len(x) == k])

    for i in range(n):
        res.extend(dfs(i, 0, [grid[i][0]]))

    return [item for sublist in res for item in sublist]