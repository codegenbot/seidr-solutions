def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    res = []

    def dfs(i, j, path_sum):
        nonlocal res
        if len(path_sum) == k:
            res.append(path_sum)
            return True
        for d in directions:
            ni, nj = i + d[0], j + d[1]
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                dfs(ni, nj, path_sum + [grid[ni][nj]])
        return False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return sorted(res)[0]