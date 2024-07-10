def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path, visited):
        if len(path) > k:
            return
        if (i, j) in visited:
            return
        if len(path) == k:
            return [path]
        visited.add((i, j))
        paths = []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                paths.extend(dfs(x, y, path + [grid[x][y]], visited.copy()))
        return min(paths, key=len)

    return dfs(0, 0, [grid[0][0]], {(0, 0)})