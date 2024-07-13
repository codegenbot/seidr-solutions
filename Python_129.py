def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    queue = [(0, [m[0][0]], 1)]
    result = []

    while queue:
        cell, path, length = queue.pop(0)

        if length == k:
            if not visited:
                result = sorted(path)
                visited.add(tuple(result))
            continue

        for x, y in [
            (cell - 1, cell),
            (cell + 1, cell),
            (cell, cell - 1),
            (cell, cell + 1),
        ]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                queue.append((y, path + [m[x][y]], length + 1))

    return result