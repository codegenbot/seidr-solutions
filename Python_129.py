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
            heap = [(grid[i][j], i, j, [grid[i][j]])]
            while heap:
                val, x, y, path = heappop(heap)
                if len(path) == k:
                    if min_path is None or path < min_path:
                        min_path = path
                    continue
                for nx, ny in neighbors(x, y):
                    new_path = path + [grid[nx][ny]]
                    heappush(heap, (val + grid[nx][ny], nx, ny, new_path))
    
    return min_path if min_path else []

if __name__ == "__main__":
    n = int(input())
    grid = [list(map(int, input().split())) for _ in range(n)]
    k = int(input())
    print(minPath(grid, k))