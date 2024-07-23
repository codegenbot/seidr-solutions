def minPath(grid):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j):
        if grid[i][j] == "E":
            return [m[i][j]]

        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] != "W":
                res.append([m[i][j]] + dfs(ni, nj))

        return min(res, key=len) if res else []

    return dfs(0, 0)[1:]