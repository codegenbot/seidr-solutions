```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        if (i, j) in visited or not 0 <= i < n or not 0 <= j < n:
            return None
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                if grid[ni][nj] == 1:  
                    return path + [m[ni][nj]]
        visited.remove((i, j))
        return None

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [], set())
            if res is not None:
                return res