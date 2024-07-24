def minPath(grid, k):
    n = len(grid)
    m = [[i * j for i in row] for j in range(n)]
    res = []
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited:
            return None
        visited.add((i, j))
        min_val = float("inf")
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                for cell in grid[ni]:
                    if m[ni][nj] == cell:
                        new_path = path + [cell]
                        res.append((new_path, dfs(ni, nj, new_path)))
        if not res:
            return None
        res.sort()
        return res[0][1]

    start = (0, 0)
    for i in range(n):
        for j in range(n):
            if m[i][j] == 1:
                start = (i, j)
                break
    return dfs(*start, [1])