def minPath(grid):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path):
        if path:
            return path
        if i < 0 or i >= N or j < 0 or j >= N or visited[i][j]:
            return None
        visited[i][j] = True
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N:
                p = dfs(ni, nj, path + [grid[ni][nj]])
                if p is not None:
                    return p
        visited[i][j] = False
        return None

    for i in range(N):
        for j in range(N):
            p = dfs(i, j, [])
            if p and len(p) == min(
                len(path)
                for path in [dfs(x, y, []) for x in range(N) for y in range(N)]
            ):
                return p