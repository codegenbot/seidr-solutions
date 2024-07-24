```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for i in range(n)] for j in range(n)]
    queue = [(0, 0, [m[0][0]])]
    min_path = None
    while queue:
        x, y, path = queue.pop(0)
        if len(path) == k:
            if not min_path or path < min_path:
                min_path = path
        else:
            for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                nx, ny = x + dx, y + dy
                if 0 <= nx < n and 0 <= ny < n:
                    queue.append((nx, ny, path + [m[nx][ny]]))
    return min_path