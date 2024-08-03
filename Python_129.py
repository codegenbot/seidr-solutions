def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    path = [None] * k
    queue = [(0, 0, 0)]  # (row, col, path length)

    while queue:
        row, col, path_len = queue.pop(0)
        if path_len == k:
            return path[:]

        for dr, dc in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nr, nc = row + dr, col + dc
            if 0 <= nr < n and 0 <= nc < m and not visited[nr][nc]:
                visited[nr][nc] = True
                queue.append((nr, nc, path_len + 1))
                if len(path) < k:
                    path[path_len] = grid[nr][nc]

    return [i for i in set(path) if path.count(i) == 1]