from collections import deque


def minPath(grid):
    n = len(grid)

    def bfs(i, j, path):
        if grid[i][j] == "1":
            return False
        grid[i][j] = str(1)

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path + [(i, j), (ni, nj)]
                if bfs(ni, nj, new_path):
                    return True

        return False

    grid = []
    for _ in range(int(input("Enter number of rows: "))):
        row = list(input("Enter row {}: ".format(_+1)))
        grid.append(row)

    start = [i for i, row in enumerate(grid) if "1" in "".join(row)][0]

    min_length = float("inf")
    min_path = []

    for j in range(len(grid[0])):
        path = [(start, 0), (start, j)]
        if bfs(start, j, path):
            if len(path) < min_length:
                min_length = len(path)
                min_path = path

    return min_path