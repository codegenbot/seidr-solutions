def minPath(grid, k):
    def dfs(i, j, path, visited):
        if len(path) > k:
            return []
        if len(path) == k:
            return path
        path.append(grid[i][j])
        visited.add((i, j))
        
        neighbors = []
        if i > 0 and (i - 1, j) not in visited:
            neighbors.append((i - 1, j))
        if i < len(grid) - 1 and (i + 1, j) not in visited:
            neighbors.append((i + 1, j))
        if j > 0 and (i, j - 1) not in visited:
            neighbors.append((i, j - 1))
        if j < len(grid[0]) - 1 and (i, j + 1) not in visited:
            neighbors.append((i, j + 1))
        
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for neighbor in neighbors:
            ni, nj = neighbor
            result = dfs(ni, nj, path, visited)
            if result:
                return result
        
        visited.remove((i, j))
        path.pop()

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            result = dfs(i, j, [], set())
            if result:
                return result[:k]
    return []