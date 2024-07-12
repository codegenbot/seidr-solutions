def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return [path]

        if visited[i][j]:
            return []

        visited[i][j] = True
        res = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path + [grid[ni][nj]]
                paths = dfs(ni, nj, new_path)
                res.extend(paths)
        visited[i][j] = False
        return res

    min_paths = float("inf")
    for i in range(n):
        for j in range(n):
            paths = dfs(i, j, [])
            if len(paths) < min_paths:
                min_paths = len(paths)

    if min_paths == float("inf"):
        return []
    else:
        return [grid[i][j] for i, j in enumerate(next(iter(min(min_path))))]