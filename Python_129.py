def minPath(grid, k):
    n = len(grid)
    start = min(range(n), key=lambda i: min(grid[i]))
    path = [grid[start // n][start % n]]
    visited = {start}
    while len(path) < k:
        x, y = divmod(start, n)
        neighbors = [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]
        next_cell = min(
            (grid[i][j], i * n + j)
            for i, j in neighbors
            if 0 <= i < n and 0 <= j < n and i * n + j not in visited
        )
        path.append(next_cell[0])
        start = next_cell[1]
        visited.add(start)
    return path