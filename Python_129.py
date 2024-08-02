def minPath(grid, k):
    N = len(grid)

    def dfs(x, y, path):
        if len(path) >= k:
            return path
        for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited:
                visited.add((nx, ny))
                res = next(dfs(nx, ny, path + [grid[nx][ny]]) for _ in [0] if dfs(nx, ny, path + [grid[nx][ny]]) is not None)
                if res:
                    return res
                visited.remove((nx, ny))

    min_val = min(min(row) for row in grid)
    start_points = [(i, j) for i in range(N) for j in range(N) if grid[i][j] == min_val]

    for start_point in start_points:
        visited = set()
        visited.add(start_point)
        res = next(dfs(start_point[0], start_point[1], [min_val]) for _ in [0] if dfs(start_point[0], start_point[1], [min_val]) is not None)
        if res:
            return res