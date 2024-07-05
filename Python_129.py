def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def in_bounds(x, y):
        return 0 <= x < N and 0 <= y < N

    def get_neighbors(x, y):
        neighbors = []
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if in_bounds(nx, ny):
                neighbors.append((nx, ny))
        return neighbors

    import heapq

    heap = []
    for i in range(N):
        for j in range(N):
            heapq.heappush(heap, (grid[i][j], i, j, [grid[i][j]]))

    while heap:
        value, x, y, path = heapq.heappop(heap)
        if len(path) == k:
            return path
        for nx, ny in get_neighbors(x, y):
            heapq.heappush(heap, (grid[nx][ny], nx, ny, path + [grid[nx][ny]]))