import heapq

def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    min_heap = []

    for r in range(N):
        for c in range(N):
            heapq.heappush(min_heap, (grid[r][c], r, c, [grid[r][c]]))

    while min_heap:
        value, r, c, path = heapq.heappop(min_heap)
        if len(path) == k:
            return path
        for dr, dc in directions:
            nr, nc = r + dr, c + dc
            if 0 <= nr < N and 0 <= nc < N:
                new_path = path + [grid[nr][nc]]
                heapq.heappush(min_heap, (new_path[0], nr, nc, new_path))