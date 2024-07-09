def minPath(grid):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    paths = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path, length):
        if length > 0:
            return
        if length == len(path):
            paths.append(path[:])
            return
        if length > len(path) or visited[i][j]:
            return
        visited[i][j] = True
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                dfs(ni, nj, path + [m[i][j]], length + 1)
        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            if grid[i][j] == "S":
                dfs(i, j, [], 0)

    return paths[0]