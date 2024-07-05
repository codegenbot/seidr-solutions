def minPath(grid, k):
    from heapq import heappop, heappush

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def in_bounds(x, y):
        return 0 <= x < N and 0 <= y < N

    min_path = [float("inf")] * k
    heap = []

    for i in range(N):
        for j in range(N):
            heappush(heap, (grid[i][j], i, j, [grid[i][j]]))

    while heap:
        val, x, y, path = heappop(heap)
        if len(path) == k:
            return path
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if in_bounds(nx, ny):
                new_path = path + [grid[nx][ny]]
                heappush(heap, (grid[nx][ny], nx, ny, new_path))


# Example usage:
# print(minPath([[1,2,3], [4,5,6], [7,8,9]], 3)) # Output: [1, 2, 1]
# print(minPath([[5,9,3], [4,1,6], [7,8,2]], 1)) # Output: [1]