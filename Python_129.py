def minPath(grid, k):
    n = len(grid)
    flat_grid = [cell for row in grid for cell in row]
    if k >= len(flat_grid):
        return flat_grid

    path = []
    visited = set()
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    for _ in range(k):
        current_min = float('inf')
        next_cell = None

        for i in range(n):
            for j in range(n):
                if grid[i][j] < current_min and (i, j) not in visited:
                    next_cell = (i, j)
                    current_min = grid[i][j]
        
        path.append(grid[next_cell[0]][next_cell[1])
        visited.add(next_cell)

    return path