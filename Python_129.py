def minPath(grid, k):
    N = len(grid)
    visited = [[False for _ in range(N)] for _ in range(N)]
    path = []

    def dfs(x, y, current_path):
        nonlocal path
        if len(current_path) == k:
            path = current_path[:]
            return True

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                visited[nx][ny] = True
                dfs(nx, ny, current_path + [grid[nx][ny]])
                visited[nx][ny] = False

        return False

    for i in range(N):
        for j in range(N):
            if dfs(i, j, [grid[i][j]]):
                return path

    return []