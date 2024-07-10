def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                queue = [(i, j, [grid[i][j]])
                while queue and len(queue[2]) <= k:
                    x, y, path = queue.pop(0)
                    res.append(path[-1])
                    for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
                        nx, ny = x + dx, y + dy
                        if 0 <= nx < n and 0 <= ny < n:
                            queue.append((nx, ny, path + [grid[nx][ny]]))
    return res[:k]