def minPath(grid, k):
    N = len(grid)
    visited = [[False for _ in range(N)] for _ in range(N)]
    path = []
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, p):
        nonlocal path
        if len(p) == k:
            return p
        visited[x][y] = True
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                new_p = dfs(nx, ny, p + [grid[nx][ny]])
                if new_p is not None:
                    return new_p
        visited[x][y] = False
        return None

    for i in range(N):
        for j in range(N):
            res = dfs(i, j, [])
            if res is not None:
                return res