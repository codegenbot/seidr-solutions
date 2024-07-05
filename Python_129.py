def minPath(grid, k):
    from heapq import heappush, heappop

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    min_heap = []

    for i in range(N):
        for j in range(N):
            heappush(min_heap, (grid[i][j], [(i, j)]))

    while min_heap:
        path_sum, path = heappop(min_heap)
        if len(path) == k:
            return [grid[x][y] for x, y in path]

        x, y = path[-1]
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                new_path = path + [(nx, ny)]
                new_path_sum = path_sum + grid[nx][ny]
                heappush(min_heap, (new_path_sum, new_path))


if __name__ == "__main__":
    N = int(input())
    grid = [list(map(int, input().split())) for _ in range(N)]
    k = int(input())
    result = minPath(grid, k)
    print(result)