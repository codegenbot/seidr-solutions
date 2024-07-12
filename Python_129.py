def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if visited[i][j]:
            return None

        visited[i][j] = True
        min_path = None
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path + [grid[ni][nj]]
                min_path = dfs(ni, nj, new_path) or min_path
        visited[i][j] = False
        return min_path

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [grid[i][j]]) or res
    return sorted(res)