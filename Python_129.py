def minPath(grid):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    memo = {}

    def dfs(i, j, path, cnt):
        if (i, j) in memo:
            return memo[(i, j)]

        if cnt == 0:
            return path

        res = []
        for x, y in [(1, 0), (0, 1)]:
            ni, nj = i + x, j + y
            if (
                0 <= ni < n
                and 0 <= nj < n
                and grid[ni][nj] == 1
                and (ni, nj) not in memo
            ):
                res.append(dfs(ni, nj, path + [m[ni][nj]], cnt - 1))

        memo[(i, j)] = min(res, key=lambda x: len(x)) if res else []
        return memo[(i, j)]

    return dfs(0, 0, [], len(grid[0]) - 1)[1:]