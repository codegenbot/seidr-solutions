def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    path = []

    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            path = sorted(current_path)
            return True

        if (i, j) in visited:
            return False

        visited.add((i, j))

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 1 <= ni < n and 1 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, current_path + [m[ni][nj]])

        visited.remove((i, j))
        return False

    for i in range(1, n):
        for j in range(1, n):
            if dfs(i, j, []):
                return path