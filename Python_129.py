def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    path = [grid[start[0]][start[1]]
    visited = {start}

    while len(path) < k:
        i, j = visited.pop()
        for x, y in ((i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)):
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                visited.add((x, y))
                path.append(grid[x][y])

    return path[:k]