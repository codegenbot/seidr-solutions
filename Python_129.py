def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, cnt):
        if cnt == k:
            return [path]

        res = []
        for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                new_path = list(path)
                new_path.append(m[ni][nj])
                res.extend(dfs(ni, nj, new_path, cnt + 1))
        return sorted(res)

    res = dfs(0, 0, [m[0][0]], 0)
    return min(res)