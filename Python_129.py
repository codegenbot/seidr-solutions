def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    res = []

    def dfs(i, j, path):
        if (i, j) in [(0, 0), (n - 1, n - 1)]:
            return path
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                visited[x][y] = True
                res.append(dfs(x, y, path + [grid[x][y]]))
                visited[x][y] = False
        return min(res) if res else []

    return dfs(0, 0, [grid[0][0]])