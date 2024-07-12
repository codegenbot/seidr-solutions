def minPath(grid, k):
    n = len(grid)
    m = [[cell for cell in row] for row in grid]

    def dfs(x, y, path, visited):
        if len(path) == k:
            return path
        visited.add((x, y))
        paths = []
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                paths.append(dfs(nx, ny, path + [m[nx][ny]], visited.copy()))
        return min(paths) if paths else []

    for i in range(n):
        for j in range(n):
            result = dfs(i, j, [], set())
            if result:
                return result