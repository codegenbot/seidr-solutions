def shortest_path_to_target(grid):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    memo = {}

    def dfs(i, j, path):
        if (i, j) in memo:
            return memo[(i, j)]

        if grid[i][j] == "T":
            return path

        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in memo:
                res.append(dfs(ni, nj, path + [m[ni][nj]]))

        memo[(i, j)] = min(res, key=len)
        return memo[(i, j)]

    return dfs(0, 0, [])