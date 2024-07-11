def minPath(grid, k):
    n = len(grid)
    paths = set()

    def dfs(i, j, path):
        if len(path) == k:
            paths.add(tuple(sorted(path)))
            return
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path:
                dfs(x, y, path + [grid[x][y]])

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return sorted(list(paths))