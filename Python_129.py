def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        current_cell = (path[-1] // n, path[-1] % n)
        next_cell = None

        for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            new_i, new_j = current_cell[0] + di, current_cell[1] + dj
            if 0 <= new_i < n and 0 <= new_j < n and grid[new_i][new_j] in visited:
                next_cell = (new_i, new_j)
                break

        if next_cell is None:
            break
        
        path.append(grid[next_cell[0]][next_cell[1]])
        visited.discard((next_cell[0], next_cell[1]))

    return path[:k]