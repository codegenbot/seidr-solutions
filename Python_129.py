def minPath(grid, k):
    N = len(grid)
    values = [[(i * N + j, val) for j, val in enumerate(row)] for i, row in enumerate(grid)]
    visited = set()
    queue = [(0, 0, [grid[0][0]])]
    while queue:
        x, y, path = queue.pop(0)
        if (x, y) in visited:
            continue
        visited.add((x, y))
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                new_path = path + [grid[nx][ny]]
                new_total_value = x * N + y + sum(grid[nx][ny] for i in range(k))
                if new_total_value <= k:
                    queue.append((nx, ny, new_path))
        if len(path) == k:
            return sorted(path)
    return