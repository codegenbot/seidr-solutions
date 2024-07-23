```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total):
        if total == k:
            return [path]
        paths = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                new_path = dfs(ni, nj, path + [grid[i][j]], total + grid[i][j])
                visited[ni][nj] = False
                if len(new_path) > 0:
                    paths.extend(new_path)
        return paths

    for i in range(n):
        for j in range(n):
            res.extend(dfs(i, j, [], grid[i][j]))
    return res