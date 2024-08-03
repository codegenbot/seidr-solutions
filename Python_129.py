def minPath(grid, k):
    N = len(grid)
    n = N * N
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])]
    res = []

    while queue:
        state, path = queue.pop(0)

        if len(path) > k:
            continue

        if len(path) == k:
            res.append(path[:])
            continue

        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            x, y = state[0] + dx, state[1] + dy

            if 1 <= x < N and 1 <= y < N and grid[x][y] not in seen:
                new_state = (x, y)
                queue.append((new_state, path + [grid[x][y]]))
                seen.add(grid[x][y])

    return min(res)