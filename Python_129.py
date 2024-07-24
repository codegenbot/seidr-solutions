def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return [path]

        paths = []
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                new_path = path + [grid[ni][nj]]
                paths.extend(dfs(ni, nj, new_path))
                visited[ni][nj] = False

        return sorted(set([p for p in paths]))

    min_paths = []
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                paths = dfs(i, j, [grid[i][j]])
                if not min_paths or sorted(min_paths[0]) > sorted(paths[0]):
                    min_paths = paths

    return min_paths[0]