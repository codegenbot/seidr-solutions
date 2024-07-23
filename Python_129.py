def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total):
        if total == k:
            return [path]
        visited[i][j] = True
        paths = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]], total + grid[i][j])
                if len(new_path) > 0:
                    paths.extend(new_path)
        visited[i][j] = False
        return paths

    min_cost = float("inf")
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                paths = dfs(i, j, [], grid[i][j])
                for path in paths:
                    if sum(path) == k and sum(path) < min_cost:
                        res = [path]
                        min_cost = sum(path)
                    elif sum(path) == k and sum(path) == min_cost:
                        res.append(path)

    return res