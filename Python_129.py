def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    queue = [(0, 0, [grid[0][0]])]
    res = None
    while queue:
        x, y, path = queue.pop(0)
        if len(path) > k or (res and sorted(path) < sorted(res)):
            continue
        visited[x][y] = True
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                queue.append((nx, ny, path + [grid[nx][ny]]))
        if len(path) == k:
            res = sorted(path)
    return res