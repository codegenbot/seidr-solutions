```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, count):
        if count == k:
            return path
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                new_path = dfs(ni, nj, path + [grid[ni][nj]], count + 1)
                if new_path:
                    return new_path
                visited[ni][nj] = False
        return None

    min_path = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 'S':
                path = dfs(i, j, [grid[i][j]], 1)
                if path and len(path) == k:
                    if not min_path or path < min_path:
                        min_path = path
    return min_path