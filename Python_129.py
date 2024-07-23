```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total):
        if i == n - 1 and j == n - 1:
            return [[path + [grid[i][j]], total + grid[i][j]]] if total + grid[i][j] == k else []
        visited[i][j] = True
        paths = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]], total + grid[i][j])
                paths.extend(new_path)
        visited[i][j] = False
        return paths

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                temp = dfs(i, j, [], 0)
                res.extend(sorted(temp, key=lambda x: x[1])[:1])

    return [x[0] for sublist in res for x in sublist]