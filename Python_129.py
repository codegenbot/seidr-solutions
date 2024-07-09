from collections import deque


def minPath(grid):
    n = len(grid)

    def bfs(i, j, path):
        if grid[i][j] == 1:
            return False
        grid[i][j] = 1

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path + [(i, j), (ni, nj)]
                if bfs(ni, nj, new_path):
                    return True

        return False

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                start = (i, j)

    min_length = float("inf")
    min_path = []

    path = [start]
    while path:
        x, y = path[-1]
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if grid[nx][ny] == 0:
                new_path = list(path)
                new_path.append((nx, ny))
                if bfs(nx, ny, new_path):
                    return new_path

    return min_path