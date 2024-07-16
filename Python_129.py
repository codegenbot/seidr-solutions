def minPath(grid, k):
    N = len(grid)
    visited = [[False for _ in range(N)] for _ in range(N)]
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def isValid(i, j):
        return 0 <= i < N and 0 <= j < N

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited[i][j] = True
        next_cell = None
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if (
                isValid(x, y)
                and not visited[x][y]
                and (next_cell is None or grid[x][y] < grid[next_cell[0]][next_cell[1]])
            ):
                next_cell = (x, y)

        return [grid[i][j]] + dfs(next_cell[0], next_cell[1], path + [grid[i][j]])

    min_val = float("inf")
    start_cell = None
    for i in range(N):
        for j in range(N):
            if grid[i][j] < min_val:
                min_val = grid[i][j]
                start_cell = (i, j)

    return dfs(start_cell[0], start_cell[1], [])