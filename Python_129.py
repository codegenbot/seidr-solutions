```
def minPathSum(grid, k):
    N = len(grid)

    def dfs(i, j, path):
        if len(path) == k:
            return sum(path)
        if i < 0 or i >= N or j < 0 or j >= N:
            return float("inf")
        res = float("inf")
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < N and 0 <= nj < N:
                res = min(res, grid[ni][nj] + dfs(ni, nj, path + [grid[ni][nj]]))
        return res

    return min(dfs(i, j, [grid[i][j]]) for i in range(N) for j in range(N))

check(minPathSum(grid, k))