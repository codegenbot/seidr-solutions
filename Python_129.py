def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    path = [grid[start[0]][start[1]]]
    visited = set([(start[0], start[1])])
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    while len(path) < k:
        min_val = float("inf")
        next_cell = None
        for dx, dy in directions:
            x, y = start[0] + dx, start[1] + dy
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                if grid[x][y] < min_val:
                    min_val = grid[x][y]
                    next_cell = (x, y)
        if next_cell is not None:
            path.append(grid[next_cell[0]][next_cell[1]])
            visited.add(next_cell)
            start = next_cell
        else:
            break

    return path