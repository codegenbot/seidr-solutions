def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, visited, path):
        if len(path) == k:
            return path

        visited.add((x, y))
        min_path = None

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                new_path = dfs(nx, ny, visited.copy(), path + [grid[nx][ny]])
                if min_path is None or new_path < min_path:
                    min_path = new_path

        return min_path

    min_val = float("inf")
    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, set(), [grid[i][j]])
            if path is not None and path < min_val:
                min_val = path
                min_path = path

    return min_path