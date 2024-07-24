def minPath(grid, k):
    N = len(grid)
    for i in range(N):
        grid[i] = [(j + 1) * N + val for j, val in enumerate(grid[i])]
    queue = [(grid[0][0], [grid[0][0]])]
    visited = set((0, 0))
    while queue:
        (val, path) = queue.pop(0)
        if len(path) == k + 1:
            return path
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            nx, ny = i + dx, j + dy
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited:
                queue.append((grid[nx][ny], path + [grid[nx][ny]]))
                visited.add((nx, ny))
    return []