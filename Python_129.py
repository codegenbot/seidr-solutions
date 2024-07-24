def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                visited[ni][nj] = False
                if not res or new_path < res:
                    res = new_path
        return res

    for i in range(n):
        for j in range(n):
            visited[i][j] = True
            res = dfs(i, j, [grid[i][j]])
            visited[i][j] = False
            if not res or res < minPath:
                minPath = res
    return minPath