def minPath(grid, k):
    n = len(grid)
    rows = len(grid)
    cols = len(grid[0])
    visited = [[False] * cols for _ in range(rows)]
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited[i][j] = True
        min_val = float("inf")
        next_cell = None

        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < n and not visited[x][y] and grid[x][y] < min_val:
                min_val = grid[x][y]
                next_cell = (x, y)

        if next_cell is None:
            return []
        
        return [grid[i][j]] + dfs(next_cell[0], next_cell[1], path + [min_val])

    min_val = float("inf")
    start_cell = None
    for i in range(n):
        for j in range(n):
            if grid[i][j] < min_val:
                min_val = grid[i][j]
                start_cell = (i, j)

    return dfs(start_cell[0], start_cell[1], [])