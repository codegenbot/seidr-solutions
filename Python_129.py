def minPath(grid, k):
    from heapq import heappop, heappush

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def neighbors(x, y):
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                yield nx, ny

    min_path = None
    for i in range(N):
        for j in range(N):
            heap = [(grid[i][j], i, j, [grid[i][j]])]
            while heap:
                val, x, y, path = heappop(heap)
                if len(path) == k:
                    if min_path is None or path < min_path:
                        min_path = path
                else:
                    for nx, ny in neighbors(x, y):
                        heappush(heap, (grid[nx][ny], nx, ny, path + [grid[nx][ny]]))

    return min_path