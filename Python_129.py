def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    min_path = []

    def dfs(i, j, path):
        nonlocal min_path
        if len(path) == k:
            return path
        visited[i][j] = True
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < m and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if len(min_path) == 0 or tuple(sorted(new_path)) < tuple(
                    sorted(min_path)
                ):
                    min_path = new_path
        visited[i][j] = False
        return min_path

    for i in range(n):
        for j in range(m):
            path = dfs(i, j, [grid[i][j]])
            if len(path) == k:
                return path