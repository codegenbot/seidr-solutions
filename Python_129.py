def minPath(grid, k):
    n = len(grid)
    seen = set()
    for i in range(n):
        for j in range(n):
            seen.add((i, j, grid[i][j]))
    visited = {(0, 0, grid[0][0])}
    queue = [(0, [grid[0][0]])]
    while queue:
        x, path = queue.pop(0)
        if len(path) == k:
            return path
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny, grid[nx][ny]) not in seen:
                visited.add((nx, ny, grid[nx][ny]))
                queue.append(((nx, ny, grid[nx][ny]), path + [grid[nx][ny]]))
    return []