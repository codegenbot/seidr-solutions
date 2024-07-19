def minPath(grid, k):
    n = len(grid)
    flat_grid = [cell for row in grid for cell in row]
    if k > n*n:
        return flat_grid

    start = min(min(row) for row in grid)
    path = [start]
    visited = [(i, j) for i in range(n) for j in range(n) if grid[i][j] == start]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    next_cell = (0, 0)

    while len(path) < k:
        min_value = float("inf")
        next_cell = None
        for i, j in visited:
            for di, dj in directions:
                ni, nj = (i + di) % n, (j + dj) % n
                if grid[ni][nj] < min_value and (ni, nj) not in visited:
                    min_value = grid[ni][nj]
                    next_cell = (ni, nj)

        if next_cell is None:
            break

        path.append(grid[next_cell[0]][next_cell[1]])
        visited.append(next_cell)

    return path