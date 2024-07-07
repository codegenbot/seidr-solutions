def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, i):
        nonlocal path
        if i == k:
            path.append(grid[x][y])
            return True
        visited[x][y] = True
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                path.append(grid[nx][ny])
                if dfs(nx, ny, i + 1):
                    return True
        visited[x][y] = False
        path.pop()
        return False

    for x in range(N):
        for y in range(N):
            if not visited[x][y]:
                dfs(x, y, 0)
                if len(path) == k:
                    return path
    return []