def minPath(grid, k):
    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        if (i, j) in visited:
            return
        path.append(grid[i][j])
        visited.add((i, j))
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
            res = dfs(ni, nj, path, visited)
            if res:
                return res
        path.pop()
        visited.remove((i, j))

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            res = dfs(i, j, [], set())
            if res:
                return res