def minPath(grid, k):
    N = len(grid)
    start_row, start_col = divmod(min(sum(grid, [])), N)
    path = [grid[start_row][start_col]]

    while len(path) < k:
        row, col = divmod(path[-1], N)
        neighbors = [(row - 1, col), (row + 1, col), (row, col - 1), (row, col + 1)]
        next_cell = min(
            (grid[r][c], r, c) for r, c in neighbors if 0 <= r < N and 0 <= c < N
        )
        path.append(next_cell[0])

    return path