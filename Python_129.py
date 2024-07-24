def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path, visited):
        if len(path) == k:
            return [path]
        visited.add((i, j))
        paths = []
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                paths.extend(dfs(ni, nj, path + [grid[ni][nj]], visited))
        return paths

    for i in range(n):
        for j in range(n):
            if dfs(i, j, [], set()):
                return sorted(dfs(i, j, [], set())[0])