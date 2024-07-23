def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total):
        if i == n - 1 and j == n - 1:
            return [path + [grid[i][j]]]
        visited[i][j] = True
        min_path = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]], total + grid[i][j])
                if len(new_path) > 0:
                    min_path.extend(new_path)
        visited[i][j] = False
        return min_path

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                temp = dfs(i, j, [], grid[i][j])
                temp.sort(key=lambda x: sum(x))
                res.extend(temp[:1])

    return [x for sublist in res for x in sublist]