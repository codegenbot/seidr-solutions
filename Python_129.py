def minPath(grid, k):
    from heapq import heappop, heappush

    def neighbors(x, y):
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < len(grid) and 0 <= ny < len(grid[0]):
                yield nx, ny

    N = len(grid)
    min_path = None
    heap = []

    for i in range(N):
        for j in range(N):
            heappush(heap, (grid[i][j], [(i, j)]))

    while heap:
        value, path = heappop(heap)
        if len(path) == k:
            current_path = [grid[x][y] for x, y in path]
            if min_path is None or current_path < min_path:
                min_path = current_path
        else:
            x, y = path[-1]
            for nx, ny in neighbors(x, y):
                heappush(heap, (grid[nx][ny], path + [(nx, ny)]))

    return min_path