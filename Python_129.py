def minPath(grid):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) > 0:
            return path
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                visited[x][y] = True
                res.append(dfs(x, y, path + [grid[x][y]]))
                visited[x][y] = False
        return min(res) if res else []

    return dfs(0, 0, [])