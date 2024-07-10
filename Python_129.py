def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                start = (i, j)
                break
    visited = set()
    dfs(start[0], start[1], [grid[start[0]][start[1]]], k, res, visited)
    return res


def dfs(i, j, path, k, res, visited):
    if len(path) == k:
        res.extend(path)
        return
    for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
        ni, nj = i + di, j + dj
        if (
            0 <= ni < len(grid)
            and 0 <= nj < len(grid[0])
            and (ni, nj) not in visited
            and grid[ni][nj] not in path
        ):
            visited.add((ni, nj))
            dfs(ni, nj, path + [grid[ni][nj]], k, res, visited)
            visited.remove((ni, nj))