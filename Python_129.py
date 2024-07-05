def minPath(grid, k):
    from heapq import heappush, heappop

    def neighbors(x, y):
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < len(grid) and 0 <= ny < len(grid[0]):
                yield nx, ny

    n = len(grid)
    pq = []
    for i in range(n):
        for j in range(n):
            heappush(pq, (grid[i][j], i, j, [grid[i][j]]))

    while pq:
        val, x, y, path = heappop(pq)
        if len(path) == k:
            return path
        for nx, ny in neighbors(x, y):
            heappush(pq, (grid[nx][ny], nx, ny, path + [grid[nx][ny]]))