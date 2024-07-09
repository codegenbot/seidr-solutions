def minPath(grid, k):
    n = len(grid)
    start = None
    for i in range(n):
        if '1' in ''.join(grid[i]):
            start = (i, 0)
            break

    def dfs(i, j, path):
        nonlocal k
        if len(path) == k:
            return path
        min_path = []
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] == '1':
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if not min_path or len(new_path) < len(min_path):
                    min_path = new_path
        return min_path

    return dfs(*start, [])