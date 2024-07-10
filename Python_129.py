def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if (i, j) in set(zip(*[grid[i] for i in range(n)])):
            return []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n:
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
                res.append(dfs(x, y, path + [grid[x][y]]))
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
        return min(res) if res else []

    return dfs(0, 0, [grid[0][0]])