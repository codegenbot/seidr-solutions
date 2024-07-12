def minPath(grid, k):
    n = len(grid)
    m = [[str(i * n + j) for j in range(n)] for i in range(n)]

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

    all_paths = []
    for i in range(n):
        for j in range(n):
            paths = dfs(i, j, [])
            if paths:
                all_paths.append(min(paths))

    all_paths.sort()
    return min(all_paths)


grid = [[1, 2], [3, 4]]
k = 2
print(minPath(grid, k))