def minPath(grid, k):
    N = len(grid)
    n = N * N

    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path):
        if len(path) == k:
            return [i, j]
        if visited[i][j]:
            return None
        visited[i][j] = True

        min_val = n + 1
        min_path = None

        for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                if grid[ni][nj] < min_val:
                    min_val = grid[ni][nj]
                    min_path = dfs(ni, nj, path + [min_val])
        visited[i][j] = False
        return min_path

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [])
            if path:
                return path[2:]