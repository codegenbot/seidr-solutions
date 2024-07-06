def minPath(grid, k):
    N = len(grid)
    visited = set()
    queue = [(0, 0, [])]  # (row, col, path)

    while queue:
        row, col, path = queue.pop(0)

        if len(path) == k:
            return path

        for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nr, nc = row + dr, col + dc

            if 0 <= nr < N and 0 <= nc < N and (nr, nc) not in visited:
                queue.append((nr, nc, path + [grid[nr][nc]]))
                visited.add((nr, nc))

    return []