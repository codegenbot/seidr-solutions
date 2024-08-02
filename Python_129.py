def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited[i][j] = True
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        next_cell = None
        for ni, nj in neighbors:
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                if next_cell is None or grid[ni][nj] < grid[next_cell[0]][next_cell[1]]:
                    next_cell = (ni, nj)

        if next_cell:
            return dfs(
                next_cell[0], next_cell[1], path + [grid[next_cell[0]][next_cell[1]]]
            )
        else:
            return path

    min_value = min(min(row) for row in grid)
    start_cell = [
        (i, j) for i in range(N) for j in range(N) if grid[i][j] == min_value
    ][0]

    return dfs(start_cell[0], start_cell[1], [grid[start_cell[0]][start_cell[1]]])