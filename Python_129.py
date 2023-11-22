def minPath(grid, k):
    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]) or (i, j) in visited:
            return None
        visited.add((i, j))
        path.append(grid[i][j])
        for ni, nj in [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]:
            res = dfs(ni, nj, path, visited)
            if res:
                return res
        visited.remove((i, j))
        path.pop()
        return None

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            visited = set()
            res = dfs(i, j, [], visited)
            if res:
                return res
    return None