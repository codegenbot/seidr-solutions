def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    x, y = 0, 0
    path = [grid[x][y]]
    for _ in range(k - 1):
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        dx, dy = random.choice(directions)
        new_x, new_y = x + dx, y + dy
        if 0 <= new_x < n and 0 <= new_y < n:
            path.append(grid[new_x][new_y])
            x, y = new_x, new_y
    return path