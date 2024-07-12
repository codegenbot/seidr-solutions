```
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

    min_paths = []
    for i in range(n):
        for j in range(n):
            paths = dfs(i, j, [])
            if not min_paths or (len(min_paths[0]) > k and len(paths) <= k):
                min_paths = [min(paths, key=len)]
            elif len(min_paths[0]) < k:
                min_paths = [min(min_paths, key=len)]

    return min_paths[0] if len(min_paths[0]) == k else []