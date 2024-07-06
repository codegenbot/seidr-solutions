def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = path + [grid[ni][nj]]
                visited.add((ni, nj))
                res = dfs(ni, nj, new_path, visited)
                if res:
                    return res
                visited.remove((ni, nj))

        return None

    min_path = []
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]], {(i, j)})
            if path and (not min_path or path < min_path):
                min_path = path

    return min_path