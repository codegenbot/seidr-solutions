def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        current = path[-1]
        neighbors = [
            (i, j)
            for i, j in [
                (current[0] - 1, current[1]),
                (current[0] + 1, current[1]),
                (current[0], current[1] - 1),
                (current[0], current[1] + 1),
            ]
            if 0 <= i < n and 0 <= j < n and (i, j) not in visited
        ]
        next_cell = min(neighbors, key=lambda x: (grid[x[0]][x[1]], x))
        path.append(grid[next_cell[0]][next_cell[1]])
        visited.add(next_cell)

    return path