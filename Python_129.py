def minPath(grid, k):
    N = len(grid)
    m = [(i, j) for i in range(N) for j in range(N)]
    m.sort(key=lambda x: grid[x[0]][x[1]])

    res = []
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited or (i < 0 or i >= N or j < 0 or j >= N):
            return None
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N and (ni, nj) not in visited:
                res.append(dfs(ni, nj, path + [grid[ni][nj]]))
        return min(res, key=lambda x: x)

    return dfs(m[0][0], m[0][1], [grid[m[0][0]][m[0][1]]])[1:]