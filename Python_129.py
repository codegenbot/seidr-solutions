def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = [(i, j) for i in range(n) for j in range(n) if grid[i][j] == start]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    while len(path) < k and next_cell is not None:
        min_value = float('inf')
        next_cell = None
        for i, j in visited:
            for di, dj in directions:
                ni, nj = (i + di) % n, (j + dj) % n
                if grid[ni][nj] < min_value:
                    min_value = grid[ni][nj]
                    next_cell = (ni, nj)

        if next_cell is not None:
            path.append(grid[next_cell[0]][next_cell[1])
            visited.remove(next_cell)

    return path