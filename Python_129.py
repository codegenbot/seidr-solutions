def minPath(grid, k):
    N = len(grid)
    memo = {}
    def dfs(i, j, path):
        if (i, j) in memo:
            return memo[(i, j)]
        if k == 0:
            memo[(i, j)] = sorted(path)
            return memo[(i, j)]
        for ni, nj in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if 0 <= ni < N and 0 <= nj < N and grid[ni][nj] not in path:
                path.append(grid[ni][nj])
                res = dfs(ni, nj, path)
                if res:
                    return res
                path.pop()
        return None

    min_path = []
    for i in range(N):
        for j in range(N):
            path = [grid[i][j]]
            res = dfs(i, j, path)
            if res and not min_path or res < min_path:
                min_path = res
    return min_path