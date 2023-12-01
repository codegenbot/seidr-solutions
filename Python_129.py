def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        neighbors = [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]
        neighbors = [(x, y) for x, y in neighbors if 0 <= x < len(grid) and 0 <= y < len(grid[0])]
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for x, y in neighbors:
            if (x, y) not in visited:
                visited.add((x, y))
                result = dfs(x, y, path + [grid[x][y]])
                if result:
                    return result
                visited.remove((x, y))

    visited = set()
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            visited.add((i, j))
            result = dfs(i, j, [grid[i][j]])
            if result:
                return result