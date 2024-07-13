```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    stack = [(0, 0, [grid[0][0]])]

    while stack:
        x, y, path = stack.pop()
        if len(path) == k + 1:
            if not res or tuple(sorted(path)) < tuple(sorted(res)):
                res = list(path)
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                stack.append((nx, ny, path + [grid[nx][ny]]))
                visited[nx][ny] = True

    return res