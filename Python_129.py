def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    path = []

    def dfs(i, j, curr_path):
        if len(curr_path) == k:
            return curr_path
        if (i, j) in visited or i < 0 or i >= n or j < 0 or j >= n:
            return None

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                if m[ni][nj] not in curr_path:
                    new_path = dfs(ni, nj, curr_path + [m[ni][nj]])
                    if new_path is not None:
                        return new_path

        return None

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]])
            if path is not None:
                return path