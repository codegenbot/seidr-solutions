def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        res.append(grid[i][j])
        min_path = None
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]])
                if min_path is None or new_path < min_path:
                    min_path = new_path
        visited[i][j] = False
        return min_path

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [])
    return sorted(res)