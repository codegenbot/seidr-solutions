def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(i, j, count):
        nonlocal path
        if count == k:
            return [grid[i][j]]

        if visited[i][j]:
            return []

        visited[i][j] = True
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        res = []
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            if 0 <= ni < N and 0 <= nj < N:
                new_path = dfs(ni, nj, count + 1)
                if new_path:
                    res.append([grid[i][j]] + new_path)
        visited[i][j] = False
        return min(res, key=lambda x: (x.count(grid[i][j]), x)) if res else []

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, 0)
            if path:
                return path