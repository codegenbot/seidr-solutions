def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    paths = []

    def dfs(i, j, path, count):
        if count == k:
            paths.append(path[:])
            return
        visited[i][j] = True
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                path.append(grid[ni][nj])
                dfs(ni, nj, path, count + 1)
                path.pop()
        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [], 0)

    return sorted(
        [v for path in paths for v in path],
        key=lambda x: [path.index(x) for path in paths].index(x),
    )