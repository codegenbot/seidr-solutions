def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        neighbors = [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]
        for ni, nj in neighbors:
            if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]) and (ni, nj) not in visited:
                visited.add((ni, nj))
                res = dfs(ni, nj, path + [grid[ni][nj]])
                if res:
                    return res
                visited.remove((ni, nj))
    
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            visited = set()
            visited.add((i, j))
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res