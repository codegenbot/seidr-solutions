def minPath(grid, k):
    from heapq import heappop, heappush

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def neighbors(x, y):
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                yield nx, ny

    pq = []
    for i in range(N):
        for j in range(N):
            heappush(pq, (grid[i][j], i, j, [grid[i][j]]))

    while pq:
        val, x, y, path = heappop(pq)
        if len(path) == k:
            return path
        for nx, ny in neighbors(x, y):
            heappush(pq, (grid[nx][ny], nx, ny, path + [grid[nx][ny]]))