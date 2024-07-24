def minPath(grid, k):
    n = len(grid)
    m = [[cell for cell in row] for row in grid]
    visited = [[False]*n for _ in range(n)]
    path = []

    def dfs(i, j, path_length):
        if path_length == k:
            return [path]
        paths = []
        for x, y in [(0, 1), (1, 0), (-1, 0), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                new_path = path + [m[ni][nj]]
                paths.extend(dfs(ni, nj, path_length + 1))
                visited[ni][nj] = False
        return paths

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                paths = dfs(i, j, 0)
                if paths:
                    path = min(paths)
                    return path