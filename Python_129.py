from collections import deque


def minPath(grid):
    n = len(grid)
    start = None
    for i in range(n):
        if "1" in str(grid[i]):
            start = (i, 0)
            break
    if start is None:
        return []

    def bfs(i, j, path):
        nonlocal start
        if grid[i][j] == 0:
            return False
        grid[i][j] = 1

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < len(grid[0]):
                new_path = path + [(i, j), (ni, nj)]
                if (ni, nj) == start:
                    return True

        return False

    min_length = float("inf")
    min_path = []

    for j in range(len(grid[0])):
        path = [(start[0], 0), start]
        if bfs(start[0], j, path):
            if len(path) < min_length:
                min_length = len(path)
                min_path = path

    return min_path