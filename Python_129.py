def minPath(grid, k):
    N = len(grid)
    n = N * N
    memo = {}

    def dfs(i, j, path):
        if (i, j) in memo:
            return memo[(i, j)]
        if i < 0 or i >= N or j < 0 or j >= N:
            return []
        if len(path) == k:
            return [grid[i][j]]
        for ni, nj in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= ni < N and 0 <= nj < N:
                res = []
                for cell in dfs(ni, nj, path + [grid[i][j]]):
                    res.append(cell)
                if res:
                    return res
        memo[(i, j)] = [path]
        return [path]

    min_path = []
    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [])
            if not min_path or sorted(path) < sorted(min_path):
                min_path = path

    return min_path