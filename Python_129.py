```
def minPath(grid, k):
    n = len(grid)
    visited = [[False for _ in range(n)] for _ in range(n)]
    queue = [(0, 0, [grid[0][0]])]
    result = None
    while queue:
        x, y, path = queue.pop(0)
        if len(path) > k:
            continue
        visited[x][y] = True
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                new_path = path + [grid[nx][ny]]
                if len(new_path) == k:
                    if result is None or new_path < result:
                        result = new_path
                else:
                    queue.append((nx, ny, new_path))
    return result