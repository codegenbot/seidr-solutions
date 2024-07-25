def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = set((i, j) for i in range(n) for j in range(n) if grid[i][j] == start)

    while len(path) < n * n and len(visited) < n * n:
        current_pos = (path[-1] // n, path[-1] % n)
        valid_moves = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        next_move = None
        min_val = k

        for di, dj in valid_moves:
            new_pos = path[-1] + di * n + dj
            if 0 <= new_pos < n * n and new_pos not in path:
                x, y = new_pos // n, new_pos % n
                if (x, y) not in visited and grid[x][y] + 1 < min_val:
                    next_move = new_pos
                    min_val = grid[x][y] + 1

        if next_move is None:
            break
        path.append(next_move)
        visited.add((next_move // n, next_move % n))

    return [grid[position // n][position % n] for position in path]