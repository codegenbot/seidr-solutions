def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
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
        for neighbor in neighbors:
            if grid[neighbor[0]][neighbor[1]] not in path:
                res = dfs(neighbor[0], neighbor[1], path)
                if res:
                    return res
        path.pop()
    
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = dfs(i, j, [])
            if path:
                return path