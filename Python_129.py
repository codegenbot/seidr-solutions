def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    i, j = next(iter(visited))  # Initialize i and j with the last cell coordinates before the loop

    while len(path) < k:
        current = path[-1]
        next_cell = None
        for di, dj in directions:
            ni, nj = i + di, j + dj  # Update ni and nj coordinates using the last cell coordinates i and j
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                if next_cell is None or grid[ni][nj] < grid[next_cell[0]][next_cell[1]]:
                    next_cell = (ni, nj)
        path.append(grid[next_cell[0]][next_cell[1]])
        visited.add(next_cell)
        i, j = next_cell  # Update i and j with the coordinates of the next cell

    return path