def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    path = []
    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            path = current_path[:]
            return True
        if not visited[i][j]:
            visited[i][j] = True
            for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                ni, nj = i + x, j + y
                if 0 <= ni < N and 0 <= nj < N:
                    dfs(ni, nj, current_path + [grid[ni][nj]])
            visited[i][j] = False
        return False

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                dfs(i, j, [grid[i][j]])

    return path