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
            new_path = path + [(nx, ny)]
            heappush(min_paths, (current_val + grid[nx][ny], new_path))


if __name__ == "__main__":
    N = int(input())
    grid = [list(map(int, input().split())) for i in range(N)]
    k = int(input())
    result = minPath(grid, k)
    print(result)