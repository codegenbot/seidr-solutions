def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    path = [grid[start[0]][start[1]]]
    for _ in range(k - 1):
        i, j = start
        candidates = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        next_cell = min(
            (grid[x][y], x, y) for x, y in candidates if 0 <= x < n and 0 <= y < n
        )
        path.append(grid[next_cell[1]][next_cell[2]])
        start = next_cell[1:]
    return path