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
                        heappush(heap, (grid[nx][ny], nx, ny, length + 1, new_path))
    return min_path

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().split()

    N = int(data[0])
    k = int(data[1])
    grid = []
    idx = 2
    for i in range(N):
        grid.append([int(data[idx + j]) for j in range(N)])
        idx += N

    result = minPath(grid, k)
    print(" ".join(map(str, result)))