def minPath(grid):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path):
        nonlocal grid
        if i == N - 1 and j == N - 1:
            return path

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                visited[ni][nj] = True

                if dfs(ni, nj, path + [grid[ni][nj]]):
                    return path + [grid[ni][nj]]

                visited[ni][nj] = False

        return None

    min_path = []

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                temp_path = dfs(i, j, [])
                if temp_path and (not min_path or len(temp_path) < len(min_path)):
                    min_path = temp_path

    return min_path