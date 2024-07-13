def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return [path]

        paths = []
        for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                paths += dfs(ni, nj, path + [grid[ni][nj]])
                visited[ni][nj] = False

        return min(paths)

    for i in range(n):
        for j in range(n):
            res += dfs(i, j, [grid[i][j]])

    return [x for y in res for x in y]