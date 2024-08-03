def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    path = []
    def dfs(i, j, current_path):
        if len(current_path) == k:
            return current_path
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                visited[ni][nj] = True
                new_path = current_path + [grid[ni][nj]]
                path.append(dfs(ni, nj, new_path))
                visited[ni][nj] = False
        return min(path) if path else []

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                visited[i][j] = True
                return dfs(i, j, [grid[i][j]])