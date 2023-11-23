def minPath(grid, k):
    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        visited.add((i, j))
        neighbors = [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]
        for ni, nj in neighbors:
            if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]) and (ni, nj) not in visited:
                path.append(grid[ni][nj])
                result = dfs(ni, nj, path, visited)
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