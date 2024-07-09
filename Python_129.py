from collections import deque


def minFallingRainWater(grid):
    n = len(grid)
    m = [[0 for _ in range(n)] for _ in range(n)]
    queue = deque()

    for i in range(n):
        for j in range(n):
            if grid[i][j] == "1":
                queue.append((i, j))
                m[i][j] = 1
            else:
                m[i][j] = 0

    dx = [1, -1, 0, 0]
    dy = [0, 0, 1, -1]

    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < n and 0 <= ny < n and m[nx][ny] == 0:
                m[nx][ny] = min(
                    m[x][y] + 1,
                    int(min(grid[r][c] for r in range(n) for c in range(n))),
                )
                queue.append((nx, ny))
    res = -1
    maxH = -1

    for i in range(n):
        for j in range(n):
            if m[i][j] > maxH:
                maxH = m[i][j]
                res = int(min(grid[r][c] for r in range(i) for c in range(n)))
            elif m[i][j] == maxH and grid[i][j] < res:
                res = grid[i][j]

    return str(res)