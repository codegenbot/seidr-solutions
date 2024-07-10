def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]:
            if 0 <= x < len(grid) and 0 <= y < len(grid[0]) and (x, y) not in visited:
                visited.add((x, y))
                res = dfs(x, y, path + [grid[x][y]])
                if res:
                    return res
                visited.remove((x, y))

    visited = set()
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            visited.add((i, j))
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res