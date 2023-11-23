def minPath(grid, k):
    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
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
            path.append(grid[neighbor[0]][neighbor[1]])
            result = dfs(neighbor[0], neighbor[1], path, visited)
            if result:
                return result
            path.pop()
        visited.remove((i, j))
    
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = [grid[i][j]]
            visited = set()
            result = dfs(i, j, path, visited)
            if result:
                return result