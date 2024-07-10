```
def minPath(grid, k):
    N = len(grid)

    def dfs(i, j, path, total):
        if len(path) == k:
            return [total]
        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N:
                res += dfs(ni, nj, path + [grid[ni][nj]], total + grid[ni][nj])
        return res

    return min(set(map(sum, dfs(i, j, [grid[i][j]], grid[i][j]))) for i in range(N) for j in range(N))