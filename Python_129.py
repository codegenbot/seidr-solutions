def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, length, path):
        if length == k:
            return [path]

        if length > k:
            return []

        visited[i][j] = True
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        res = None

        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]

            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, length + 1, path + [grid[i][j]])

                if new_path:
                    res = new_path
        visited[i][j] = False
        return res

    for i in range(n):
        for j in range(n):
            result = dfs(i, j, 0, [])

            if result:
                return result