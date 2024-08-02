def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    path = []
    max_val = n * n
    queue = [(grid[0][0], [grid[0][0]], 1)]

    while queue:
        val, curr_path, step = queue.pop(0)
        if step > k:
            continue
        if len(curr_path) == k + 1:
            return sorted(curr_path)
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            x, y = divmod(val - 1, n)
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny]:
                new_val = grid[nx][ny]
                queue.append((new_val, curr_path + [new_val], step + 1))
                visited[nx][ny] = True

    return []