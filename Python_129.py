def minPath(grid, k):
    n = len(grid)
    seen = set()
    min_path = []

    def dfs(x, y, path):
        nonlocal min_path
        if len(path) > k:
            return False

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] not in seen:
                new_path = path + [grid[nx][ny]]
                seen.add(grid[nx][ny])

                if len(new_path) == k:
                    min_path = sorted(new_path)
                    return True

                if dfs(nx, ny, new_path):
                    return True

        return False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return min_path