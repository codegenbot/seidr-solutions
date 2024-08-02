def minPath(grid, k):
    def dfs(i, j, visited, path):
        if len(path) == k * 2 - 1:
            return path
        visited.add((i, j))
        for ni, nj in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]:
            if (
                0 <= ni < len(grid)
                and 0 <= nj < len(grid[0])
                and (ni, nj) not in visited
            ):
                new_path = dfs(ni, nj, visited.copy(), path + [grid[ni][nj]])
                if new_path:
                    return new_path
        return []

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = dfs(i, j, set(), [grid[i][j]])
            if path:
                return path