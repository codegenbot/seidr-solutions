def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])

    def dfs(i, j, path):
        if len(path) == k:
            return path

        seen = set()
        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            if 0 <= ni < n and 0 <= nj < m:
                val = grid[ni][nj]
                path.append(val)
                seen.add((ni, nj))

                res = dfs(ni, nj, path[:])
                if res:
                    return res

                path.pop()
                seen.remove((ni, nj))

        return None

    for i in range(n):
        for j in range(m):
            path = []
            res = dfs(i, j, path)
            if res and len(res) == k:
                return res