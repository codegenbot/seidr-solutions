def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]):
            return None
        if (i, j) in visited:
            return None
        visited.add((i, j))
        path.append(grid[i][j])
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + dx, j + dy
            res = dfs(ni, nj, path)
            if res:
                return res
        path.pop()
        visited.remove((i, j))

    visited = set()
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            res = dfs(i, j, [])
            if res:
                return res