def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    path = []

    def dfs(i, j, length):
        nonlocal path
        if length == k:
            return [m[i][j]]
        if (i, j) in visited or length > k:
            return []

        visited.add((i, j))
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        res = []
        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            if 0 <= ni < n and 0 <= nj < n:
                new_path = dfs(ni, nj, length + 1)
                if new_path:
                    res.append([m[i][j]] + new_path)
        visited.remove((i, j))
        return min(res, key=lambda x: (x.count(m[i][j]), x)) if res else []

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, 0)
            if path:
                return path