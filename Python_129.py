def minPath(grid, k):
    n = len(grid)
    m = [[0] * n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            m[i][j] = (i * n) + j + 1

    queue = [(grid[0][0], [m[0][0]])]
    min_path = None
    min_len = float("inf")

    while queue:
        val, path = queue.pop(0)

        if len(path) > k:
            continue

        if len(path) == k and (min_path is None or path < min_path):
            min_path = path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = i + dx, j + dy

            if 0 <= x < n and 0 <= y < n:
                queue.append((m[x][y], path + [m[x][y]]))

    return min_path