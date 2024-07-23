def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total):
        if i == n - 1 and j == n - 1:
            return [path]
        if total > k:
            return []
        visited[i][j] = True
        res = None
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]], total + int(grid[i][j]))
                if len(new_path) > 0:
                    if res is None or sorted(map(int, new_path)) >= sorted(map(int, [i for i in res])):
                        res = new_path
        visited[i][j] = False
        return res if res else []

    res = dfs(0, 0, [], 0)
    return [x for r in res for x in r]