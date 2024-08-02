def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    queue = [(0, 0, [])]  # (row, col, path)

    while queue:
        r, c, path = queue.pop(0)

        if len(path) == k:
            return path

        for dr, dc in [
            (-1, -1),
            (-1, 0),
            (-1, 1),
            (0, -1),
            (0, 1),
            (1, -1),
            (1, 0),
            (1, 1),
        ]:
            nr, nc = r + dr, c + dc

            if (
                0 <= nr < N
                and 0 <= nc < N
                and not visited[nr][nc]
                and len(path) + 1 <= k
            ):
                visited[nr][nc] = True
                queue.append((nr, nc, path + [grid[nr][nc]]))

    return []