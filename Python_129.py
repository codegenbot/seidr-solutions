def minPath(grid, k):
    n = len(grid)
    start_val = min(min(row) for row in grid)
    start_pos = [(i, j) for i in range(n) for j in range(n) if grid[i][j] == start_val][
        0
    ]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def valid_move(x, y):
        return 0 <= x < n and 0 <= y < n

    path = [grid[start_pos[0]][start_pos[1]]]
    current_pos = start_pos

    while len(path) < k:
        next_val = float("inf")
        next_pos = None

        for dx, dy in directions:
            new_x, new_y = current_pos[0] + dx, current_pos[1] + dy
            if valid_move(new_x, new_y) and grid[new_x][new_y] < next_val:
                next_val = grid[new_x][new_y]
                next_pos = (new_x, new_y)

        path.append(next_val)
        current_pos = next_pos

    return path