def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    row = next(i for i, x in enumerate(grid) if start in x)
    col = grid[row].index(start)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    for _ in range(k - 1):
        next_val = float("inf")
        next_row, next_col = -1, -1
        for dr, dc in directions:
            new_row, new_col = row + dr, col + dc
            if 0 <= new_row < n and 0 <= new_col < n:
                if grid[new_row][new_col] < next_val:
                    next_val = grid[new_row][new_col]
                    next_row, next_col = new_row, new_col
        path.append(next_val)
        row, col = next_row, next_col
    return path