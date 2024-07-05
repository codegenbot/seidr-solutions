def minPath(grid, k):
    from heapq import heappush, heappop

    def neighbors(x, y):
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < len(grid) and 0 <= ny < len(grid[0]):
                yield nx, ny

    N = len(grid)
    min_heap = []

    for i in range(N):
        for j in range(N):
            heappush(min_heap, (grid[i][j], i, j, [grid[i][j]]))

    while min_heap:
        val, x, y, path = heappop(min_heap)
        if len(path) == k:
            return path
        for nx, ny in neighbors(x, y):
            new_path = path + [grid[nx][ny]]
            heappush(min_heap, (grid[nx][ny], nx, ny, new_path))