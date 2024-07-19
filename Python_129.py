def minPath(grid, k):
    n = len(grid)
    visited = set()
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        visited.add((x, y))
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                new_path = dfs(nx, ny, path + [grid[nx][ny]])
                if new_path:
                    return new_path

        visited.remove((x, y))
        return None

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path