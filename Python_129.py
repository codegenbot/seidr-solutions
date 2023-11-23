def minPath(grid, k):
    def dfs(i, j, path, visited):
        if len(path) > k:
            return []
        if (i, j) not in visited:
            path.append(grid[i][j])
            visited.add((i, j))
        if len(path) == k:
            return path
        neighbors = [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]
        neighbors = [(ni, nj) for ni, nj in neighbors if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]) and (ni, nj) not in visited]
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])

        for neighbor in neighbors:
            ni, nj = neighbor
            result = dfs(ni, nj, path.copy(), visited.copy())
            if result:
                return result
        path.pop()
        return []

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            result = dfs(i, j, [], set())
            if result:
                return result