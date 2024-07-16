def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        curr = path[-1]
        candidates = [
            (i, j)
            for i, j in [
                (curr[0], curr[1] + 1),
                (curr[0], curr[1] - 1),
                (curr[0] + 1, curr[1]),
                (curr[0] - 1, curr[1]),
            ]
            if 0 <= i < n and 0 <= j < n and (i, j) not in visited
        ]
        next_cell = min(candidates, key=lambda cell: grid[cell[0]][cell[1]])
        path.append(grid[next_cell[0]][next_cell[1]])
        visited.add(next_cell)

    return path