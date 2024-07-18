def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = set()

    def dfs(x, y, path):
        if len(path) == k:
            return path

        visited.add((x, y))
        min_val = float("inf")
        next_cell = None

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited:
                if grid[nx][ny] < min_val:
                    min_val = grid[nx][ny]
                    next_cell = (nx, ny)

        return [grid[x][y]] + dfs(next_cell[0], next_cell[1], path + [min_val])

    min_val = float("inf")
    start_cell = None
    for i in range(N):
        for j in range(N):
            if grid[i][j] < min_val:
                min_val = grid[i][j]
                start_cell = (i, j)

    return dfs(start_cell[0], start_cell[1], [])