def minPath(grid, k):
    from heapq import heappop, heappush

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def neighbors(r, c):
        for dr, dc in directions:
            nr, nc = r + dr, c + dc
            if 0 <= nr < N and 0 <= nc < N:
                yield nr, nc

    min_heap = []
    for r in range(N):
        for c in range(N):
            heappush(min_heap, (grid[r][c], r, c, [grid[r][c]]))

    while min_heap:
        value, r, c, path = heappop(min_heap)
        if len(path) == k:
            return path
        for nr, nc in neighbors(r, c):
            new_path = path + [grid[nr][nc]]
            heappush(min_heap, (new_path[-1], nr, nc, new_path))