def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = set((i, j) for i in range(n) for j in range(n) if grid[i][j] == start)

    while len(path) < k:
        current_pos = (path[-1] // n, path[-1] % n)
        valid_moves = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        next_move = None
        for di, dj in valid_moves:
            new_pos = path[-1] + di * n + dj
            if 0 <= new_pos < n * n and new_pos not in visited:
                next_move = new_pos
                break
        if next_move is None:
            break
        path.append(grid[next_move // n][next_move % n])
        visited.add(next_move)

    return path