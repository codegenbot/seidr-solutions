def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = [[False] * n for _ in range(n)]
    queue = [(0, 0, [m[0][0]])]
    min_path = None
    while queue:
        x, y, path = queue.pop(0)
        if len(path) == k + 1:
            if not min_path or path < min_path:
                min_path = path
        elif (x, y) != (0, 0):
            for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                nx, ny = x + dx, y + dy
                if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                    queue.append((nx, ny, path + [m[nx][ny]]))
                    visited[nx][ny] = True
    return min_path[1:]