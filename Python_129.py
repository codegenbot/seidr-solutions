def minPath(grid, k):
    n = len(grid)
    visited = set()
    queue = [(grid[0][0], [grid[0][0]])]

    while queue:
        (cell_value, path) = queue.pop(0)

        if len(path) == k:
            return path

        for x in range(max(0, cell_value - n), min(n, cell_value + 1)):
            for y in range(max(0, cell_value - n), min(n, cell_value + 1)):
                new_cell_value = grid[x][y]
                if (new_cell_value, path + [new_cell_value]) not in visited:
                    queue.append(((new_cell_value, path + [new_cell_value])))
                    visited.add((new_cell_value, path + [new_cell_value]))

    return []