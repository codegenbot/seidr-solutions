def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total):
        if total == k:
            return [path]
        paths = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[i][j] = True
                new_path = dfs(ni, nj, path + [grid[i][j]], total + grid[i][j])
                for p in new_path:
                    paths.append(p)
                visited[i][j] = False
        return paths

    for i in range(n):
        for j in range(n):
            res.extend(dfs(i, j, [], 0))
    return res