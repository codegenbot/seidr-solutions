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
    for i in range(N):
        for j in range(N):
            heap = [(grid[i][j], i, j, 1, [grid[i][j]])]
            while heap:
                val, x, y, length, path = heappop(heap)
                if length == k:
                    if min_path is None or path < min_path:
                        min_path = path
                else:
                    for nx, ny in neighbors(x, y):
                        new_path = path + [grid[nx][ny]]
                        heappush(heap, (sum(new_path), nx, ny, length + 1, new_path))
    return min_path


if __name__ == "__main__":
    import sys

    input = sys.stdin.read
    data = input().split()

    k = int(data.pop())
    N = int(len(data) ** 0.5)
    grid = [[int(data[N * i + j]) for j in range(N)] for i in range(N)]

    result = minPath(grid, k)
    print(result)