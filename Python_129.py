import heapq

def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            if not res or path < res:
                res = path
            return True

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            newi, newj = i + x, j + y

            if 0 <= newi < n and 0 <= newj < n and grid[newi][newj] not in path:
                dfs(newi, newj, path + [grid[newi][newj]])

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return res