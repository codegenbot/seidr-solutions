def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n - k + 1):
        for j in range(n - k + 1):
            total = sum([grid[x][j] for x in range(i, i + k)])
            if not res or total < min(
                [sum([grid[x][j] for x in range(y1, y2)]) for y1, y2 in res]
            ):
                res = [(i, j)]
            elif total == min(
                [sum([grid[x][j] for x in range(y1, y2)]) for y1, y2 in res]
            ):
                res.append((i, j))
    return dfs(0, 0, k, [], grid)
def dfs(i, j, k, path, grid):
    if k == 0:
        return [path]
    elif k > len(grid) - i:
        return []
    paths = []
    for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
        ni, nj = i + dx, j + dy
        if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]):
            paths += dfs(ni, nj, k-1, path + [(ni, nj)], grid)
    return paths