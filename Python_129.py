def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        elif i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]):
            return None
        elif grid[i][j] == -1:
            return None

        num = grid[i][j]
        grid[i][j] = -1

        for dx, dy in [[-1, 0], [1, 0], [0, -1], [0, 1]]:
            x, y = i + dx, j + dy
            res = dfs(x, y, path + [num])
            if res is not None:
                return res

        grid[i][j] = num

    n = len(grid)
    start_row, start_col = 0, 0

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                start_row, start_col = i, j
                break

    return dfs(start_row, start_col, [])
