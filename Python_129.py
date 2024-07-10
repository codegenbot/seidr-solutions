def minPath(grid, k):
    n = len(grid)
    q = [(0, 0, [grid[0][0]])]
    visited = set((0, 0))
    res = []

    while q:
        x, y, path = q.pop(0)

        if len(path) == k:
            res = path
            break

        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                if grid[nx][ny] == grid[x][y]: 
                    q.append((nx, ny, path + [grid[nx][ny]]))
                visited.add((nx, ny))

    return res