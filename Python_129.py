def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        if not visited:
            break
        
        next_cell = next(((i, j) for i, j in visited for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)] if (i + di, j + dj) in visited), None)
        if next_cell is None:
            break
        
        i, j = next_cell
        visited.discard((i, j))
        path.append(grid[i][j])
        if not visited:  # If all cells were visited, reset the 'visited' set
            visited = {(i, j) for i in range(n) for j in range(n)}
    
    if len(path) < k:
        path += [path[-1]] * (k - len(path))
    
    return path[:k]