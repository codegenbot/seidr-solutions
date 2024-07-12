```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    queue = [(0, 0, [])]  # (row, col, path)
    res = None
    while queue:
        row, col, path = queue.pop(0)
        if len(path) == k:
            if not res or sorted(path) < sorted(res):
                res = path
        for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nr, nc = row + dr, col + dc
            if 0 <= nr < n and 0 <= nc < n and not visited[nr][nc]:
                queue.append((nr, nc, path + [grid[nr][nc]]))
                visited[nr][nc] = True
    return res