def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    m.sort(key=lambda x: grid[x[0]][x[1]])

    visited = set()
    path = []

    def dfs(i, j, count):
        if count == k:
            return [grid[i][j]]
        if (i, j) in visited or count > k:
            return []

        visited.add((i, j))
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        res = []
        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            if 0 <= ni < n and 0 <= nj < n:
                res.extend(dfs(ni, nj, count + 1))
        visited.remove((i, j))
        return [grid[i][j]] + min(res)

    return dfs(m[0][0], m[0][1], 0)[1:]