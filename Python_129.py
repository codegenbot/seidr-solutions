def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    paths = []

    def dfs(i, j, current_path):
        nonlocal paths
        if len(set(current_path)) == k:
            paths.append(list(current_path))
            return True
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                visited[ni][nj] = True
                if dfs(ni, nj, current_path + [grid[ni][nj]]):
                    return True
                visited[ni][nj] = False

        return False

    for i in range(N):
        for j in range(N):
            visited[i][j] = True
            dfs(i, j, [grid[i][j]])
    return paths