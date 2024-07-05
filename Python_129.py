def minPath(grid, k):
    from heapq import heappop, heappush

    N = len(grid)
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    def neighbors(x, y):
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                yield (nx, ny)

    min_path = [min(min(row) for row in grid)]
    heap = [(grid[i][j], i, j, [grid[i][j]]) for i in range(N) for j in range(N)]
    while heap:
        value, x, y, path = heappop(heap)
        if len(path) == k:
            if path < min_path:
                min_path = path
            continue
        for nx, ny in neighbors(x, y):
            new_path = path + [grid[nx][ny]]
            heappush(heap, (grid[nx][ny], nx, ny, new_path))

    return min_path