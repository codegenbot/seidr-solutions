def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        path.append(grid[i][j])
        neighbors = []
        if i > 0:
            neighbors.append((i - 1, j))
        if i < len(grid) - 1:
            neighbors.append((i + 1, j))
        if j > 0:
            neighbors.append((i, j - 1))
        if j < len(grid[0]) - 1:
            neighbors.append((i, j + 1))
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for neighbor in neighbors:
            ni, nj = neighbor
            if grid[ni][nj] not in path:
                res = dfs(ni, nj, path)
                if res:
                    return res
        path.pop()

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            res = dfs(i, j, [])
            if res:
                return res