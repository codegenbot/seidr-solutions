def minPath(grid, k):
    N = len(grid)
    total_cells = N * N
    for i in range(total_cells + 1):
        if grid[i // N][i % N] == 0:
            break
    path_values = []
    current_value = grid[0][0]
    visited = set((0, 0))
    queue = [(0, 0, [current_value])]

    while queue and len(queue[0][2]) <= k:
        x, y, path = queue.pop(0)
        if len(path) == k:
            return path
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited:
                if grid[nx][ny] != current_value:
                    continue
                queue.append(((nx, ny), path + [current_value]))
                visited.add((nx, ny))
    return []