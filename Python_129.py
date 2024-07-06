def minPath(grid, k):
    N = len(grid)
    total_cells = N * N
    cell_values = {i + 1: v for i, row in enumerate(grid) for v in enumerate(row)}

    def dfs(cell_value, path_length, current_path):
        if path_length == k:
            return current_path

        for neighbor_cell_value in [
            v
            for i, j in [
                (i, j) for i, row in enumerate(grid) for j, v in enumerate(row)
            ]
            if cell_values[neighbor_cell_value] != cell_value
        ]:
            new_current_path = current_path + [cell_value]
            res = dfs(neighbor_cell_value, path_length + 1, new_current_path)
            if res:
                return res

        return None

    min_path = []
    for start in cell_values:
        res = dfs(start, 0, [])
        if not min_path or res < min_path:
            min_path = res
    return min_path