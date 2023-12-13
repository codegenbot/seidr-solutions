def minPath(grid, k):
    def dfs(x, y, path, visited):
        if len(path) == k:
            return path
        visited.add((x, y))
        neighbors = [(x-1, y), (x+1, y), (x, y-1), (x, y+1)]
        for nx, ny in neighbors:
            if 0 <= nx < len(grid) and 0 <= ny < len(grid[0]) and (nx, ny) not in visited:
                path.append(grid[nx][ny])
                result = dfs(nx, ny, path, visited)
                if result:
                    return result
                path.pop()
        visited.remove((x, y))

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = [grid[i][j]]
            visited = set()
            result = dfs(i, j, path, visited)
            if result:
                return result