def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited.add((i, j))
        next_paths = []

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                next_paths.append((grid[ni][nj], ni, nj))

        next_paths.sort()

        for val, ni, nj in next_paths:
            res = dfs(ni, nj, path + [val])
            if res:
                return res

        visited.remove((i, j))

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res