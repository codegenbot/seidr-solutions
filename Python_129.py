def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(x, y, curr_path):
        nonlocal path
        if len(curr_path) == k:
            path = curr_path[:]
            return True
        if not (0 <= x < N and 0 <= y < N) or visited[x][y]:
            return False
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if dfs(nx, ny, curr_path + [grid[nx][ny]]):
                return True
        visited[x][y] = True
        return False

    for i in range(N):
        for j in range(N):
            if dfs(i, j, [grid[i][j]]):
                return path