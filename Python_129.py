def minPath(grid, k):
    import heapq

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    min_heap = []

    for i in range(N):
        for j in range(N):
            heapq.heappush(min_heap, (grid[i][j], i, j, [grid[i][j]]))

    while min_heap:
        value, x, y, path = heapq.heappop(min_heap)
        if len(path) == k:
            return path
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                new_path = path + [grid[nx][ny]]
                heapq.heappush(min_heap, (grid[nx][ny], nx, ny, new_path))