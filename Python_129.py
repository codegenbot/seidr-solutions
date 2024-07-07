def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    result = []

    def dfs(i, j, path):
        nonlocal k
        if len(path) == k:
            return path

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if (
                1 <= ni < n
                and 1 <= nj < n
                and not visited[ni][nj]
                and grid[ni][nj] not in path
            ):
                visited[ni][nj] = True
                res = dfs(ni, nj, path + [grid[ni][nj]])
                if res:
                    return res
                visited[ni][nj] = False

        return []

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                res = dfs(i, j, [grid[i][j]])
                if res:
                    return res

    return []