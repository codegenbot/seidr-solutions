def minPath(grid, k):
    N = len(grid)
    visited = set()
    queue = [(grid[0][0], [grid[0][0]])]

    while queue:
        (val, path) = queue.pop(0)
        if val in visited:
            continue
        visited.add(val)

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod(path[-1] - N, N)
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                nval = grid[nx][ny]
                new_path = list(path) + [nval]
                queue.append((nval, new_path))

        if len(visited) == k:
            return sorted(visited)

    return []