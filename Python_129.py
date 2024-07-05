def minPath(grid, k):
    from heapq import heappush, heappop

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def in_bounds(x, y):
        return 0 <= x < N and 0 <= y < N

    def bfs():
        heap = []
        for i in range(N):
            for j in range(N):
                heappush(heap, (grid[i][j], i, j, [grid[i][j]]))

        while heap:
            value, x, y, path = heappop(heap)
            if len(path) == k:
                return path

            for dx, dy in directions:
                nx, ny = x + dx, y + dy
                if in_bounds(nx, ny):
                    new_path = path + [grid[nx][ny]]
                    heappush(heap, (grid[nx][ny], nx, ny, new_path))

    return bfs()