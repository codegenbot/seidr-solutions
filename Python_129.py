```
def minPath(grid, k):
    n = len(grid)
    res = []
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = set()
    for i in range(n):
        for j in range(n):
            if grid[i][j] not in visited:
                path = []
                stack = [(i, j, [grid[i][j]])
                while stack:
                    x, y, p = stack.pop()
                    if len(p) == k:
                        res = p
                        break
                    for dx, dy in directions:
                        nx, ny = x + dx, y + dy
                        if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] not in visited:
                            stack.append((nx, ny, p + [grid[nx][ny]]))
                    visited.add(grid[x][y])
    return res