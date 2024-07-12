def minPath(grid, k):
    n = len(grid)
    for i in range(n):
        grid[i] = list(map(str, grid[i]))

    min_path = []
    visited = set()

    def dfs(i, j, path):
        nonlocal min_path
        if len(path) == k:
            if not min_path or tuple(path) < tuple(min_path):
                min_path = list(path)
            return
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in visited:
                visited.add(grid[x][y])
                dfs(x, y, path + [grid[x][y]])
                visited.remove(grid[x][y])

    for i in range(n):
        for j in range(n):
            if grid[i][j] not in visited:
                visited.add(grid[i][j])
                dfs(i, j, [grid[i][j]])
                visited.remove(grid[i][j])

    return min_path