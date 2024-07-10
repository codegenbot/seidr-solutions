def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    path = []
    dfs(m, 0, 0, k, visited, path)

    return path


def dfs(m, x, y, k, visited, path):
    if k == 0:
        return
    if (x, y) in visited:
        return

    visited.add((x, y))
    path.append(m[x][y])

    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        nx, ny = x + dx, y + dy
        if 0 <= nx < len(m) and 0 <= ny < len(m[0]):
            dfs(m, nx, ny, k - 1, visited, path)

    visited.remove((x, y))