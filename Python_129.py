```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    visited = [[False] * n for _ in range(n)]
    queue = [(0, 0, [m[0][0]], {m[0][0]:1})]

    while queue:
        x, y, path, count = queue.pop(0)
        if len(path) == k + 1:
            res = path
            break
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                queue.append((nx, ny, path + [m[nx][ny]], {i: count.get(i,0)+1 for i in count}))
                visited[nx][ny] = True

    return res