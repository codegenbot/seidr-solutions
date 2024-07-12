def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path[:])
            return False
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in path:
                path.append((ni, nj))
                dfs(ni, nj, path)
                path.pop()
        return True

    for i in range(n):
        for j in range(n):
            if dfs(i, j, [(i, j)]):
                break
    return res