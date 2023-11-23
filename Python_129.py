def minPath(grid, k):
    def dfs(i, j, path):
        path.append(grid[i][j])
        if len(path) == k-1:
            return path
        if i > 0 and (i-1, j) not in visited:
            visited.add((i-1, j))
            result = dfs(i-1, j, path)
            if result:
                return result
            visited.remove((i-1, j))
        if i < len(grid)-1 and (i+1, j) not in visited:
            visited.add((i+1, j))
            result = dfs(i+1, j, path)
            if result:
                return result
            visited.remove((i+1, j))
        if j > 0 and (i, j-1) not in visited:
            visited.add((i, j-1))
            result = dfs(i, j-1, path)
            if result:
                return result
            visited.remove((i, j-1))
        if j < len(grid[0])-1 and (i, j+1) not in visited:
            visited.add((i, j+1))
            result = dfs(i, j+1, path)
            if result:
                return result
            visited.remove((i, j+1))
        path.pop()

    visited = set()
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            visited.add((i, j))
            result = dfs(i, j, [])
            if result:
                return result
    return []