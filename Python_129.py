```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, count):
        if count == k:
            return path
        min_path = None
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                new_path = dfs(ni, nj, path + [grid[ni][nj]], count + 1)
                if new_path:
                    min_path = new_path
                    break
                visited[ni][nj] = False
        return min_path

    min_path = []
    for i in range(n):
        for j in range(n):
            visited[i][j] = True
            path = dfs(i, j, [grid[i][j]], 1)
            if path and len(path) == k:
                if not min_path or path < min_path:
                    min_path = path
            visited[i][j] = False

    return min_path