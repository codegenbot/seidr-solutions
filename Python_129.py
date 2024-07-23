```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    queue = [(0, 0, [1], {1: 1})]

    while queue:
        x, y, path, count = queue.pop(0)
        if len(path) == k + 1:
            res = path
            break
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                queue.append((nx, ny, path + [1], {c: count.get(c, 0) + 1 for c in count}))
                visited[nx][ny] = True

    return res