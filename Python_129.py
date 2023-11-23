def minPath(grid, k):
    path = []
    n = len(grid)
    x, y = 0, 0
    for _ in range(k):
        path.append(grid[x][y])
        if x % 2 == 0:
            if y < n - 1:
                y += 1
            else:
                x += 1
        else:
            if y > 0:
                y -= 1
            else:
                x += 1
    return path