def minPath(grid, k):
    N = len(grid)
    seen = set()
    queue = [(0, 0, [grid[0][0]])]
    res = []

    while queue:
        x, y, path = queue.pop(0)

        if len(path) == k + 1:
            res.append(path[:-1])
            continue

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < N and 0 <= ny < N and grid[nx][ny] not in path:
                new_path = list(path)
                new_path.append(grid[nx][ny])
                new_path.sort()

                if tuple(new_path) not in seen:
                    queue.append((nx, ny, new_path))
                    seen.add(tuple(new_path))

    return min(res)[1:-1]