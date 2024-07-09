def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    result = [start]
    seen = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(result) < k:  # Update while loop condition
        neighbors = [(i, j) for i, j in seen if i > 0 and (i - 1, j) not in seen]
        neighbors += [(i, j) for i, j in seen if i < n - 1 and (i + 1, j) not in seen]
        neighbors += [(i, j) for i, j in seen if j > 0 and (i, j - 1) not in seen]
        neighbors += [(i, j) for i, j in seen if j < n - 1 and (i, j + 1) not in seen]
        next_cell = min(neighbors, key=lambda x: grid[x[0]][x[1]])
        result.append(grid[next_cell[0]][next_cell[1]])
        seen.add(next_cell)

    return result