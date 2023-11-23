def minPath(grid, k):
    min_path = []
    
    def dfs(i, j, path, visited, min_path):
        if len(path) == k:
            if not min_path or len(path) < len(min_path):
                min_path[:] = path
            return
        
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
        neighbors.sort(key=lambda x: abs(grid[x[0]][x[1]] - grid[i][j]))
        
        for neighbor in neighbors:
            ni, nj = neighbor
            dfs(ni, nj, path.copy(), visited.copy(), min_path)
        
        path.pop()
        visited.remove((i, j))
    
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            dfs(i, j, [], set(), min_path)
    
    return min_path