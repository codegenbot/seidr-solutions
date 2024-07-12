def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    queue = [(0, [grid[0][0]], 1)]
    visited = set((0, grid[0][0]))

    while queue:
        x, path, steps = queue.pop(0)
        if steps == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, grid[nx][ny]) not in visited:
                queue.append((nx, path + [grid[nx][ny]], steps + 1))
                visited.add((nx, grid[nx][ny]))