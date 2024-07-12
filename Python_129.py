def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    dx, dy = [0, 0, 1, -1], [1, -1, 0, 0]
    path = [grid[start[0]][start[1]]]
    while len(path) < k:
        x, y = start
        candidates = [(grid[x + dx[i]][y + dy[i]], x + dx[i], y + dy[i]) for i in range(4) if 0 <= x + dx[i] < n and 0 <= y + dy[i] < n]
        nxt = min(candidates)
        path.append(grid[nxt[1]][nxt[2]])
        start = nxt[1:]
    return path