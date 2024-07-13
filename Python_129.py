def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        res.append((i, j, path + [grid[i][j]]))
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                result = dfs(ni, nj, path + [grid[i][j]])
                if result:
                    return result
        visited[i][j] = False
        return []

    for i in range(n):
        for j in range(n):
            res.append((i, j, [grid[i][j]]))
    res.sort(key=lambda x: (x[2], x[0], x[1]))
    path = dfs(0, 0, [])
    return path[2]