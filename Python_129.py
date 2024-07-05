def minPath(grid, k):
    from heapq import heappush, heappop

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def neighbors(x, y):
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                yield nx, ny

    min_sum = float("inf")

    for i in range(N):
        for j in range(N):
            heap = [(grid[i][j], i, j, 1)]
            while heap:
                val, x, y, length = heappop(heap)
                if length == k:
                    min_sum = min(min_sum, val)
                    continue
                for nx, ny in neighbors(x, y):
                    heappush(heap, (val + grid[nx][ny], nx, ny, length + 1))

    return min_sum


if __name__ == "__main__":
    n = int(input())
    grid = [list(map(int, input().split())) for _ in range(n)]
    k = int(input())
    print(minPath(grid, k))