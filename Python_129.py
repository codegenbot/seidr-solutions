def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]

    for i in range(n):
        for j in range(n):
            m[i][j] = [grid[i][j], (i, j)]

    m.sort()

    res = []
    current_value = m[0][0]
    current_pos = m[0][1]

    for _ in range(k):
        res.append(current_value)
        x, y = current_pos
        if x == 0:
            new_pos = (x + 1, y) if grid[x][y] < grid[n - 1][y] else (n - 1, y)
        elif x == n - 1:
            new_pos = (x - 1, y) if grid[0][y] < grid[x][y] else (0, y)
        else:
            new_pos = (
                (x - 1, y)
                if grid[x - 1][y] < grid[x + 1][y] and grid[x - 1][y] < grid[x][y]
                else (x + 1, y)
            )
        current_value, current_pos = grid[new_pos[0]][new_pos[1]], new_pos

    return res