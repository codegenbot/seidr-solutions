def minPath(grid):
    n = len(grid)
    m = len(grid[0])

    def dfs(i, j, path):
        if i < 0 or j < 0 or i >= n or j >= m:
            return None
        if grid[i][j] == "X":
            return None
        if grid[i][j].isdigit():
            return path + [grid[i][j]]

        res = None
        for direction in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            new_i, new_j = i + direction[0], j + direction[1]
            temp_path = dfs(new_i, new_j, path + [grid[i][j]])
            if temp_path and (not res or len(temp_path) < len(res)):
                res = temp_path
        return res

    min_path = []
    for i in range(n):
        for j in range(m):
            path = dfs(i, j, [])
            if path and (not min_path or len(path) < len(min_path)):
                min_path = path

    return min_path