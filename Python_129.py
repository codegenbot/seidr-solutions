def minPath(grid, k):
    N = len(grid)
    visited = set()
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        visited.add((x, y))
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited:
                new_path = dfs(nx, ny, path + [grid[nx][ny]])
                if new_path:
                    return new_path

        visited.remove((x, y))

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path