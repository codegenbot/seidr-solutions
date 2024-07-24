def minPath(grid, k):
    N = len(grid)
    visited = [[False] * len(grid[0]) for _ in range(N)]
    res = []
    queue = [(0, 0, [])]
    while queue:
        row, col, path = queue.pop(0)
        if len(path) == k:
            res.append(tuple(sorted(set(path))))
        elif not visited[row][col]:
            visited[row][col] = True
            for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nr, nc = row + dr, col + dc
                if (
                    0 <= nr < N
                    and 0 <= nc < N
                    and grid[nr][nc] != "0"
                    and not visited[nr][nc]
                ):
                    queue.append((nr, nc, path + [grid[nr][nc]]))
    return min(res)