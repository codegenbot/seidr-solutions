def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                path.append(m[ni][nj])
                res = dfs(ni, nj, path, visited)
                if res is not None:
                    return res
                path.pop()
        return min_path

    min_path = []
    for i in range(n):
        for j in range(n):
            path = [m[i][j]]
            res = dfs(i, j, path, set())
            if res and (min_path == [] or res < min_path):
                min_path = res
    return min_path