def minPath(grid, k):
    from heapq import heappush, heappop

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    min_heap = []

    start_path = [(0, 0)]
    heappush(min_heap, (grid[0][0], start_path))

    while min_heap:
        path_sum, path = heappop(min_heap)
        if len(path) == k:
            return [grid[x][y] for x, y in path]

        x, y = path[-1]
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in path:
                new_path = path + [(nx, ny)]
                new_path_sum = path_sum + grid[nx][ny]
                heappush(min_heap, (new_path_sum, new_path))

if __name__ == "__main__":
    k = int(input().strip())
    grid = []
    while True:
        try:
            row = list(map(int, input().strip().split()))
            grid.append(row)
        except EOFError:
            break
    result = minPath(grid, k)
    print(result)