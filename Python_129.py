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
        paths = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                paths.extend([p + [m[ni][nj]] for p in dfs(ni, nj, length + 1)])
        visited.remove((i, j))
        return sorted(set([path + p for p in paths]))

    min_path = []
    for i in range(n):
        for j in range(n):
            if (i, j) not in visited:
                min_path = min(
                    min_path, dfs(i, j, 0), key=lambda x: [str(y) for y in x]
                )

    return min_path[0]