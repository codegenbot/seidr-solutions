def minPath(grid, k):
    from heapq import heappush, heappop

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def neighbors(x, y):
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                yield nx, ny

    min_path = None
    min_path_values = None

    for i in range(N):
        for j in range(N):
            heap = [(grid[i][j], [(i, j)])]
            while heap:
                current_value, path = heappop(heap)
                if len(path) == k:
                    path_values = [grid[x][y] for x, y in path]
                    if min_path_values is None or path_values < min_path_values:
                        min_path_values = path_values
                        min_path = path
                else:
                    x, y = path[-1]
                    for nx, ny in neighbors(x, y):
                        new_path = path + [(nx, ny)]
                        heappush(heap, (current_value + grid[nx][ny], new_path))

    return min_path_values