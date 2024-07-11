```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    for i in range(n):
        for j in range(n):
            if grid[i][j] != m[i][j]:
                m[i][j] = -1

    queue = [(0, 0, [m[0][0]])]
    visited = {(0, 0)}
    while queue:
        x, y, path = queue.pop(0)
        if m[x][y] == k:
            return path
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if (
                0 <= nx < n
                and 0 <= ny < n
                and (nx, ny) not in visited
                and m[nx][ny] != -1
            ):
                queue.append((nx, ny, path + [m[nx][ny]]))
                visited.add((nx, ny))