def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    paths = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path, length):
        if length == k:
            paths.append(path[:])
            return
        if length > k or visited[i][j]:
            return
        visited[i][j] = True
        path.append(m[i][j])
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                dfs(ni, nj, path, length + 1)
        visited[i][j] = False

    for i in range(1, n):
        for j in range(n):
            dfs(i, j, [], 0)

    paths.sort()
    return paths[0]