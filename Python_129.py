def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    path = [grid[start[0]][start[1]]]
    visited = set(start)

    while len(path) < k:
        x, y = path[-1]
        neighbors = [
            (x + dx, y + dy)
            for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]
            if 0 <= x + dx < n and 0 <= y + dy < n
        ]
        next_cell = min(
            (grid[i][j], i, j) for i, j in neighbors if (i, j) not in visited
        )
        path.append(grid[next_cell[1]][next_cell[2]])
        visited.add((next_cell[1], next_cell[2]))

    return path