def minPath(grid):
    n = len(grid)
    memo = {}

    def dfs(i, j, path):
        if (i, j) in memo:
            return memo[(i, j)]

        if i == n - 1 and j == n - 1:
            return [path]

        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in memo:
                res.extend(dfs(ni, nj, path + [grid[ni][nj]]))

        memo[(i, j)] = res
        return min(memo[(i, j)], key=len)

    return dfs(0, 0, [])