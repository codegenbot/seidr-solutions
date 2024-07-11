def minPath(grid, k):
    n = len(grid)
    paths = []

    def dfs(i, j, path):
        if len(path) == k:
            return [path]
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path:
                paths.extend(dfs(x, y, path + [grid[x][y]]))
        return paths

    for i in range(n):
        for j in range(n):
            paths.extend(dfs(i, j, [grid[i][j]]))

    return sorted(set([p[1:] for p in paths]))