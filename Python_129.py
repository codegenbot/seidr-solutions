def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path, cnt):
        if cnt == k:
            return sorted(path)

        visited[i][j] = True
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                dfs(ni, nj, path + [grid[i][j]], cnt + 1)

        visited[i][j] = False

    min_path = []
    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [], 0)
            if not min_path or path < min_path:
                min_path = path

    return min_path