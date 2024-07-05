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
    heappush(min_heap, (grid[0][0], [(0, 0)]))

    while min_heap:
        _, path = heappop(min_heap)
        if len(path) == k:
            return [grid[x][y] for x, y in path]
        x, y = path[-1]
        for nx, ny in neighbors(x, y):
            if (nx, ny) not in path:
                new_path = path + [(nx, ny)]
                heappush(min_heap, (grid[nx][ny], new_path))

import ast
grid = ast.literal_eval(input())
k = int(input())
print(minPath(grid, k))