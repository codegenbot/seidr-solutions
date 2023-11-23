def minPath(grid, k):
    def dfs(grid, i, j, k, path):
        if k == 0:
            return path
        N = len(grid)
        if i < 0 or i >= N or j < 0 or j >= N:
            return None
        if (i, j) in visited:
            return None
        visited.add((i, j))
        path.append(grid[i][j])
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + dx, j + dy
            res = dfs(grid, ni, nj, k - 1, path)
            if res:
                return res
        path.pop()
        visited.remove((i, j))

    visited = set()
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            res = dfs(grid, i, j, k - 1, [])
            if res:
                return res