```
def minPath(grid, k):
    N = len(grid)
    res = []

    def dfs(i, j, path, path_sum):
        if len(path) == k:
            nonlocal res
            if not res or sum(res[0]) > path_sum:
                res = [path]
            elif sum(res[0]) == path_sum and sorted(res[0]) != sorted(path):
                res.append(path)
            return False

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N and grid[ni][nj] not in path:
                dfs(ni, nj, path + [grid[ni][nj]], path_sum + grid[ni][nj])

    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]], grid[i][j])

    return res