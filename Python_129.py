def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    path = []

    def dfs(i, j, length):
        if length == k:
            return [m[i][j]]

        if (i, j) in visited or length > k:
            return []

        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, length + 1)
                if min_path is None or new_path < min_path:
                    min_path = new_path

        if min_path is None:
            return []

        visited.remove((i, j))
        return [m[i][j]] + min_path

    for i in range(n):
        for j in range(n):
            path.extend(dfs(i, j, 0))

    return path