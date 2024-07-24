def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            if grid[i][j] != m[i][j]:
                m[i][j] = -grid[i][j]
    queue = [(0, 0, [m[0][0]])]
    visited = set((0, 0))
    while queue:
        i, j, path = queue.pop(0)
        if len(path) == k:
            return path
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                visited.add((x, y))
                queue.append((x, y, path + [m[x][y]]))
    return []