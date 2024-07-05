def minPath(grid, k):
    from heapq import heappop, heappush

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def neighbors(x, y):
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                yield nx, ny

    min_paths = []
    for i in range(N):
        for j in range(N):
            heappush(min_paths, (grid[i][j], [(i, j)]))

    while min_paths:
        current_val, path = heappop(min_paths)
        if len(path) == k:
            return [grid[x][y] for x, y in path]

        x, y = path[-1]
        for nx, ny in neighbors(x, y):
            if (nx, ny) not in path:
                new_path = path + [(nx, ny)]
                heappush(min_paths, (current_val + grid[nx][ny], new_path))

n = int(input().strip())
grid = []
for _ in range(n):
    grid.append(list(map(int, input().strip().split())))
k = int(input().strip())

result = minPath(grid, k)
print(result)