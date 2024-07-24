def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    memo = {}

    def dfs(i, j, path):
        if (i, j) in memo:
            return memo[(i, j)]

        if k == 0:
            return path

        if visited[i][j]:
            return dfs(i, j, path)

        visited[i][j] = True
        min_path = None
        for ni, nj in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path + [grid[ni][nj]]
                min_path = (
                    min(min_path, dfs(ni, nj, new_path))
                    if min_path
                    else dfs(ni, nj, new_path)
                )

        visited[i][j] = False
        memo[(i, j)] = min_path
        return min_path

    result = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [])
            if not result or path < result:
                result = path

    return result