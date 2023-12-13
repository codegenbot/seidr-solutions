def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]):
            return []
        value = grid[i][j]
        grid[i][j] = 0
        path.append(value)
        neighbors = [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]
        neighbors.sort(key=lambda x: grid[x[0]][x[1]] if 0 <= x[0] < len(grid) and 0 <= x[1] < len(grid[0]) else float('inf'))
        for ni, nj in neighbors:
            res = dfs(ni, nj, path)
            if res:
                return res
        path.pop()
        grid[i][j] = value
        return []

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            res = dfs(i, j, [])
            if res:
                return res