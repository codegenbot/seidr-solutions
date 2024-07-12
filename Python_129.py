def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                return [grid[i][j]] * k
    visited = set()
    min_path = []

    def dfs(i, j, path):
        nonlocal min_path
        if len(path) > k or tuple(path) in visited:
            return
        if len(path) == k:
            min_path = sorted(path)
            return
        visited.add(tuple(path))
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n:
                dfs(x, y, path + [grid[x][y]])

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])
    return min_path