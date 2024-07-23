def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    res = []
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            res.append(path[:])
            return
        if (i, j) in visited or len(res) > 0 and path[-1] < res[0][-1]:
            return

        for ni, nj in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, path + [grid[ni][nj]])
                visited.add((ni, nj))
        visited.remove((i, j))

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return min(res)