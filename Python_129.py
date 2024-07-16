def minPath(grid, k):
    N = len(grid)
    start = min((grid[i][j], i, j) for i in range(N) for j in range(N))[1:]
    dx, dy = [0, 0, 1, -1], [1, -1, 0, 0]
    res = [grid[start[0]][start[1]]]
    visited = {start}

    while len(res) < k:
        candidates = []
        for x, y in visited:
            for i in range(4):
                nx, ny = x + dx[i], y + dy[i]
                if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited:
                    candidates.append((grid[nx][ny], nx, ny))
        next_cell = min(candidates)
        res.append(next_cell[0])
        visited.add((next_cell[1], next_cell[2]))

    return res