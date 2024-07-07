```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        res = []
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                res.extend(dfs(ni, nj, path + [grid[ni][nj]]))
        visited[i][j] = False
        return res

    min_path = []
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                path = dfs(i, j, [])
                if not min_path or path < min_path:
                    min_path = path
    return min_path