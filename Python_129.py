```
def minPath(grid, k):
    m, n = len(grid), len(grid[0])
    res = []
    visited = [[False]*n for _ in range(m)]
    queue = [(0, 0, [grid[0][0]], {grid[0][0]:1})]

    while queue:
        x, y, path, count = queue.pop(0)
        if len(path) == k + 1:
            res = path
            break
        for dx, dy in [(0,1), (0,-1), (1,0), (-1,0)]:
            nx, ny = x+dx, y+dy
            if 0 <= nx < m and 0 <= ny < n and not visited[nx][ny]:
                queue.append((nx, ny, path + [grid[nx][ny]], {i: count.get(i,0)+1 for i in count}))
                visited[nx][ny] = True

    return res