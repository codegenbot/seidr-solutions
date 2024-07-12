def minPathSum(grid):
    n = len(grid)
    m = [[int(i * n + j) for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return [path]
        paths = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                new_path = dfs(ni, nj, path + [m[ni][nj]])
                paths.extend(new_path)
        return paths

    k = int(input("Enter the value of k: "))
    all_paths = []
    for i in range(n):
        for j in range(n):
            paths = dfs(i, j, [])
            all_paths.extend(paths)

    return [sorted(p) for p in set(tuple(sorted(p)) for p in all_paths)]