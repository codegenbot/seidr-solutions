def minPath(grid, k):
    from heapq import heappush, heappop

    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def neighbors(x, y):
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                yield nx, ny

    min_heap = []
    for i in range(n):
        for j in range(n):
            heappush(min_heap, (grid[i][j], [(i, j)]))

    while min_heap:
        _, path = heappop(min_heap)
        if len(path) == k:
            return [grid[x][y] for x, y in path]
        x, y = path[-1]
        for nx, ny in neighbors(x, y):
            new_path = path + [(nx, ny)]
            heappush(min_heap, (grid[nx][ny], new_path))


# Read input
n = int(input("Enter the size of the grid: "))
grid = []
for _ in range(n):
    grid.append(list(map(int, input().split())))
k = int(input("Enter the path length k: "))

# Get result and print
result = minPath(grid, k)
print(" ".join(map(str, result)))