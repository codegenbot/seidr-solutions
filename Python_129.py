def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited[i][j] = True
        min_val = float("inf")
        next_cell = None

        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                if grid[ni][nj] < min_val:
                    min_val = grid[ni][nj]
                    next_cell = (ni, nj)

        return [grid[i][j]] + dfs(next_cell[0], next_cell[1], path + [min_val])

    start_val = min(min(row) for row in grid)
    start_pos = [
        (i, row.index(start_val)) for i, row in enumerate(grid) if start_val in row
    ][0]

    return dfs(start_pos[0], start_pos[1], [start_val])