def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    result = []

    def dfs(i, j, path):
        nonlocal result
        if len(path) == k:
            return [path]
        if visited[i][j]:
            return []
        if (
            grid[i][j] not in grid[i][i - 1 : i + k if i else 0 : i + k]
            or grid[i][j] not in grid[j : j - n + 1 : j - n + 1]
        ):
            return []

        visited[i][j] = True
        paths = [path + [grid[i][j]]]
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            newi, newj = i + x, j + y
            if 0 <= newi < n and 0 <= newj < m:
                paths.extend(dfs(newi, newj, path + [grid[i][j]]))
        visited[i][j] = False
        return paths

    for i in range(n):
        for j in range(m):
            if dfs(i, j, []):
                result = min(dfs(i, j, [])[:-1], key=lambda x: str(x))
                return result