def minPath(grid, k):
    from heapq import heappush, heappop

    def valid(x, y):
        return 0 <= x < n and 0 <= y < n

    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    n = len(grid)
    heap = []

    # Push all starting points into heap
    for i in range(n):
        for j in range(n):
            heappush(heap, (grid[i][j], [(i, j)], [grid[i][j]]))

    while heap:
        val, path, values = heappop(heap)
        if len(path) == k:
            return values
        x, y = path[-1]
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if valid(nx, ny):
                heappush(
                    heap,
                    (
                        values + [grid[nx][ny]],
                        path + [(nx, ny)],
                        values + [grid[nx][ny]],
                    ),
                )