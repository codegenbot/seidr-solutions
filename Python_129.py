def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return [path]
        visited[i][j] = True
        paths = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]])
                paths.extend(new_path)
        visited[i][j] = False
        return paths

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                res.extend(dfs(i, j, []))
    return res