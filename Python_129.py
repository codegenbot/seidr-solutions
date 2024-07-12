```
def minPath(grid, k):
    n = len(grid)
    m = [[str(i * n + j) for j in range(n)] for i in range(n)]
    
    def dfs(i, j, path, total):
        if len(path) == k:
            return [total]
        paths = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                new_path = dfs(ni, nj, path + [m[ni][nj]], total + int(m[ni][nj]))
                paths.extend(new_path)
        return paths

    all_paths = []
    for i in range(n):
        for j in range(n):
            paths = dfs(i, j, [], 0)
            all_paths.extend(paths)

    return min(sum(path) for path in all_paths)


grid = [[1, 2], [3, 4]]
k = 2
print(minPath(grid, k))