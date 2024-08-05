def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    visited = set()
    path = [start]
    visited.add(start)

    while len(path) < k:
        curr = path[-1]
        neighbors = []
        for i in range(n):
            for j in range(n):
                if grid[i][j] == curr:
                    for x, y in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]:
                        if 0 <= x < n and 0 <= y < n and grid[x][y] not in visited:
                            neighbors.append(grid[x][y])
        next_cell = min(neighbors)
        path.append(next_cell)
        visited.add(next_cell)

    return path