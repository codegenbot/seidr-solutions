def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return [path]

        paths = []
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in visited:
                visited.add(m[ni][nj])
                paths.extend(dfs(ni, nj, path + [m[ni][nj]], visited))
                visited.remove(m[ni][nj])

        return sorted(set([path + p for p in paths]))

    return min(dfs(0, 0, [], set()), key=lambda x: (x.count(min(x)), x.index(min(x))))