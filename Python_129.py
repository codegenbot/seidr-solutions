def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = set()
    queue = [(0, 0)]
    path = []

    while queue:
        i, j = queue.pop(0)
        if i == n - 1 and j == m - 1:
            break
        for x, y in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]:
            if 0 <= x < n and 0 <= y < m and grid[x][y] not in visited:
                queue.append((x, y))
                visited.add(grid[x][y])
    return path