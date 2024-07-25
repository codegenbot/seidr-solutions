def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    queue = [(0, 0, [grid[0][0]])]
    min_path = []
    while queue:
        x, y, path = queue.pop(0)
        if len(path) == k + 1:
            if not min_path or tuple(path) < tuple(min_path):
                min_path = list(path)
            continue
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                visited[nx][ny] = True
                queue.append((nx, ny, path + [grid[nx][ny]]))
    return min_path