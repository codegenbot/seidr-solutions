def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total, min_cost):
        if total == k:
            return [path]
        if total > k:
            return []
        visited[i][j] = True
        paths = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(
                    ni, nj, path + [grid[i][j]], total + grid[i][j], min_cost
                )
                if len(new_path) > 0:
                    paths.extend(new_path)
        visited[i][j] = False
        return paths

    for i in range(n):
        for j in range(n):
            paths = dfs(i, j, [], 0, float("inf"))
            if paths and len(paths[0]) == k:
                res.append(min(paths, key=lambda x: sum(x)))

    return [x for x in res]