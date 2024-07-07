def minPath(grid, k):
    N = len(grid)
    seen = {}

    def dfs(i, j, path, length):
        if (i, j) in seen:
            return False
        seen[(i, j)] = True

        new_path = path + [grid[i][j]]

        if length == k:
            return minPathForOrder(new_path)

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < N and 0 <= nj < N:
                if dfs(ni, nj, new_path, length + 1):
                    return True

        return False

    def minPathForOrder(path):
        res = path[:]
        for p in path:
            for i, q in enumerate(res):
                if p < q:
                    res[i], res[-1] = res[-1], res[i]
                    break
        return res

    for i in range(N):
        for j in range(N):
            dfs(i, j, [], 0)

    return minPathForOrder(
        seen.get((i, j), []) for i in range(N) for j in range(N)
    ).pop(0)