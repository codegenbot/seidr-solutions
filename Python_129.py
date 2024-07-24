def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    queue = [(0, 0, [])]

    while queue:
        i, j, path = queue.pop(0)
        if len(path) == k:
            return path

        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                visited[x][y] = True
                queue.append((x, y, path + [grid[x][y]]))

    return []