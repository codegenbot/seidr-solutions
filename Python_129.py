def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = set((i, j) for i in range(n) for j in range(n) if grid[i][j] == start)

    while len(path) < k:
        current_pos = path[-1]
        valid_moves = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        next_move = None
        for di, dj in valid_moves:
            new_pos = (current_pos[0] + di, current_pos[1] + dj)
            if new_pos in visited and 0 <= new_pos[0] < n and 0 <= new_pos[1] < n:
                next_move = new_pos
        if next_move is None:
            break
        path.append(grid[next_move[0]][next_move[1]])
        visited.remove(next_move)

    return path