def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    visited = set()

    def dfs(x, y, path):
        if sum(path) > k:
            return None
        visited.add((x, y))
        if len(path) == n * n:
            return path
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                new_path = dfs(nx, ny, path + [grid[nx][ny]])
                if new_path:
                    return new_path
        visited.remove((x, y))

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path