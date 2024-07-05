def minPath(grid, k):
    from heapq import heappush, heappop

    N = len(grid)
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    min_heap = []

    for i in range(N):
        for j in range(N):
            heappush(min_heap, (grid[i][j], i, j, [grid[i][j]]))

    while min_heap:
        val, x, y, path = heappop(min_heap)
        if len(path) == k:
            return path
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                heappush(min_heap, (grid[nx][ny], nx, ny, path + [grid[nx][ny]]))