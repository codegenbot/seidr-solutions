def minPath(grid, k):
    from heapq import heappop, heappush
    import itertools

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    min_heap = []

    # Initialize the heap with all starting cells
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
                new_path = path + [grid[nx][ny]]
                heappush(min_heap, (new_path[-1], nx, ny, new_path))