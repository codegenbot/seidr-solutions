def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            return True

        if visited[i][j]:
            return False

        visited[i][j] = True
        current_path.append(grid[i][j])

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N:
                if dfs(ni, nj, current_path):
                    return True

        visited[i][j] = False
        return False

    for i in range(N):
        for j in range(N):
            if dfs(i, j, []):
                path = current_path
                return path

    return []