from collections import deque


def minPath(grid):
    n = len(grid)
    m = len(grid[0])

    def bfs(i, j, path):
        if grid[i][j] == 1:
            return False
        grid[i][j] = 2

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < m:
                new_path = path + [(i, j), (ni, nj)]
                if bfs(ni, nj, new_path):
                    return True

        return False

    for i in range(n):
        for j in range(m):
            if grid[i][j] == 1:
                start = (i, j)

    min_length = float("inf")
    min_path = []

    path = [start]
    if bfs(*start, path):
        if len(path) < min_length:
            min_length = len(path)
            min_path = path

    return min_path