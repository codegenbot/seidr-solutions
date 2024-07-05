def minPath(grid, k):
    from heapq import heappop, heappush

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def neighbors(x, y):
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                yield nx, ny

    min_path_sum = float("inf")
    min_path = None

    for i in range(N):
        for j in range(N):
            heap = [(grid[i][j], i, j, 1, [grid[i][j]])]
            while heap:
                val, x, y, length, path = heappop(heap)
                if length == k:
                    path_sum = sum(path)
                    if path_sum < min_path_sum:
                        min_path_sum = path_sum
                        min_path = path
                else:
                    for nx, ny in neighbors(x, y):
                        if len(path) < k:
                            new_path = path + [grid[nx][ny]]
                            heappush(heap, (grid[nx][ny], nx, ny, length + 1, new_path))

    return min_path


if __name__ == "__main__":
    import sys

    input = sys.stdin.read
    data = list(map(int, input().strip().split()))

    N = data[0]
    k = data[1]
    grid = [data[i : i + N] for i in range(2, 2 + N * N, N)]

    result = minPath(grid, k)
    if result:
        print(" ".join(map(str, result)))
    else:
        print("")