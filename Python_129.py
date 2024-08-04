def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    path = [grid[start[0]][start[1]]]
    visited = {start}

    while len(path) < k:
        i, j = min(
            (i, j)
            for (x, y) in visited
            for i, j in ((x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1))
            if 0 <= i < n and 0 <= j < n and (i, j) not in visited
        )
        visited.add((i, j))
        path.append(grid[i][j])

    return path