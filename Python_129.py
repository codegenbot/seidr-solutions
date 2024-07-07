Here is the completed code:

def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]
    for i in range(n):
        for j in range(n):
            if grid[i][j] != (i * (n + 1) + j):
                m[i][j] = -grid[i][j]
    res = []
    x, y = 0, 0
    for _ in range(k):
        res.append(m[x][y])
        dx, dy = [0, 1, -1], [1, 0, 0]
        for i in range(3):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < n and 0 <= ny < n:
                m[nx][ny] -= 1
                if m[nx][ny] == 0:
                    x, y = nx, ny
    return res