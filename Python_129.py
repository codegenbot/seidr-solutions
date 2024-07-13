def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    path = []

    def dfs(i, j, curr_path):
        if len(curr_path) == k:
            nonlocal path
            path = curr_path[:]
            return True

        if (i, j) in visited or m[i][j] < min(m[0][0], m[-1][-1]):
            return False

        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, curr_path + [m[i][j]])

        visited.remove((i, j))
        return False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [m[i][j]])

    return path