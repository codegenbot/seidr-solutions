def minPath(grid, k):
    n = len(grid)

    def dfs(i, j, visited, path):
        if len(path) > k:
            return []
        if (i, j) in visited:
            return []
        visited.add((i, j))
        res = [(i, j)]
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                res.extend(dfs(x, y, visited.copy(), path + [grid[x][y]]))
        return min(res, key=len) if res else []

    return dfs(0, 0, set(), [grid[0][0]])