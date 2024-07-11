def minPath(grid, k):
    n = len(grid)
    m = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            m[i][j] = grid[i][j]

    res = []
    visited = set()
    dfs(0, 0, k, m, res, visited)
    return res


def dfs(i, j, k, m, res, visited):
    if len(res) == k:
        return
    if (i, j) in visited or i < 0 or i >= len(m) or j < 0 or j >= len(m[0]):
        return

    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ni, nj = i + x, j + y
        if 0 <= ni < len(m) and 0 <= nj < len(m[0]) and (ni, nj) not in visited:
            res.append(m[ni][nj])
            visited.add((ni, nj))
            dfs(ni, nj, k, m, res, visited)
            res.pop()
            visited.remove((ni, nj))

    if len(res) == 0:
        return

    min_val = min(res[:k])
    for i in range(len(res)):
        if res[i] < min_val:
            res[:] = [min_val]
            break