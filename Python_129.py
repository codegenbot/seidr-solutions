```
def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        min_path = None
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]])
                if min_path is None or new_path < min_path:
                    min_path = new_path
        visited[i][j] = False
        return min_path

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [])
            if path and (min_path is None or path < min_path):
                min_path = path
    return min_path