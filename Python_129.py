```
def minPath(grid, k):
    n = len(grid)
    queue = [(i, j) for i in range(n) for j in range(n) if grid[i][j] == 0]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    dist = [[float('inf')] * n for _ in range(n)]

    for i, j in queue:
        dist[i][j] = 0

    while k > 0 and queue:
        x, y = queue.pop(0)
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if (0 <= nx < n) and (0 <= ny < n) and dist[nx][ny] > dist[x][y] + 1:
                queue.append((nx, ny))
                dist[nx][ny] = dist[x][y] + 1
        k -= 1

    min_dist = float('inf')
    for i in range(n):
        for j in range(n):
            if dist[i][j] < min_dist:
                min_dist = dist[i][j]

    return [i * n + j for i, j in [(x, y) for x in range(n) for y in range(n) if dist[x][y] == min_dist]]