def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        cur = path[-1]
        neighbors = [
            (cur[0] + 1, cur[1]),
            (cur[0] - 1, cur[1]),
            (cur[0], cur[1] + 1),
            (cur[0], cur[1] - 1),
        ]
        next_val = float("inf")
        next_cell = None

        for nei in neighbors:
            if 0 <= nei[0] < n and 0 <= nei[1] < n and nei not in visited:
                if grid[nei[0]][nei[1]] < next_val:
                    next_val = grid[nei[0]][nei[1]]
                    next_cell = nei

        path.append(next_val)
        visited.add(next_cell)

    return path