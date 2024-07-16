def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = []
    visited = set()

    while len(path) < k:
        for i in range(n):
            for j in range(n):
                if grid[i][j] == start and (i, j) not in visited:
                    visited.add((i, j))
                    path.append(grid[i][j])
                    if len(path) == k:
                        return path
        start = min(cell for row in grid for cell in row)

    return path