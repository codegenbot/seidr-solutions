def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) >= k:
            return path[:k]
        if (i, j) == path[-1]:
            return None
        path.append(grid[i][j])
        neighbors = []
        if i > 0:
            neighbors.append((i-1, j))
        if i < len(grid) - 1:
            neighbors.append((i+1, j))
        if j > 0:
            neighbors.append((i, j-1))
        if j < len(grid[0]) - 1:
            neighbors.append((i, j+1))
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for neighbor in neighbors:
            ni, nj = neighbor
            result = dfs(ni, nj, path)
            if result:
                return result
        path.pop()

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            result = dfs(i, j, [])
            if result:
                return result