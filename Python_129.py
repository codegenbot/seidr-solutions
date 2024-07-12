def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        curr = path[-1]
        next_val = float("inf")
        next_cell = None

        for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                if grid[ni][nj] < next_val:
                    next_val = grid[ni][nj]
                    next_cell = (ni, nj)

        path.append(next_val)
        visited.add(next_cell)

    return path