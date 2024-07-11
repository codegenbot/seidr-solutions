def minPath(grid, k):
    n = len(grid)
    m = [[0 for _ in range(n)] for _ in range(n)]

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                m[i][j] = float("inf")
            else:
                m[i][j] = 1

    queue = [(0, 0, [grid[0][0]])]
    visited = set((0, 0))

    while queue:
        x, y, path = queue.pop(0)

        if len(path) == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                queue.append((nx, ny, path + [grid[nx][ny]]))
                visited.add((nx, ny))

    return []