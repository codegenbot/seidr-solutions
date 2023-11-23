def minPath(grid, k):
    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        visited.add((i, j))
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]) and (ni, nj) not in visited:
                next_path = dfs(ni, nj, path + [grid[ni][nj]], visited)
                if next_path:
                    return next_path
        visited.remove((i, j))
    
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = dfs(i, j, [grid[i][j]], set())
            if path:
                return path