def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    result = []

    def dfs(i, j, path, count):
        nonlocal result
        if count == k:
            result.append(sorted(path))
            return True

        if count > k or (i < 0 or i >= n or j < 0 or j >= n or visited[i][j]):
            return False

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if dfs(ni, nj, path + [grid[ni][nj]], count + 1):
                return True

        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, [grid[i][j]], 0):
                result.sort()
                print(result)