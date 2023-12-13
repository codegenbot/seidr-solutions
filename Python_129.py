def minPath(grid, k):
    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        visited.add((i, j))
        neighbors = [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]
        for ni, nj in neighbors:
            if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]) and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [grid[ni][nj]], visited)
                if new_path:
                    return new_path
        visited.remove((i, j))
        return None

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = dfs(i, j, [grid[i][j]], set())
            if path:
                return path