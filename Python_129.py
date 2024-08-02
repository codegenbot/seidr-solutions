def minPath(grid, k):
    N = len(grid)

    def dfs(x, y, path, remaining_steps):
        if len(path) == k:
            return path
        for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited and len(path) + remaining_steps > k:
                visited.add((nx, ny))
                res = dfs(nx, ny, path + [grid[nx][ny]], remaining_steps - 1)
                if res:
                    return res
                visited.remove((nx, ny))

    min_val = min(min(row) for row in grid)
    remaining_steps = N * N - k
    start_points = [(i, j) for i in range(N) for j in range(N) if grid[i][j] == min_val]

    for start_point in start_points:
        visited = set()
        visited.add(start_point)
        res = dfs(start_point[0], start_point[1], [min_val], remaining_steps)
        if res:
            return res