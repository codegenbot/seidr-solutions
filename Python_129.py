```
def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    queue = [(0, [m[0][0]])]
    result = []

    while queue:
        x, path = queue.pop(0)

        if len(path) > k:
            continue

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, ny + dy

            if 1 <= nx < n and 1 <= ny < n and m[nx][ny] not in visited:
                if len(path) + 1 == k:
                    result = path + [m[nx][ny]]
                    return result

                visited.add(m[nx][ny])
                queue.append(((nx, ny), path + [m[nx][ny]]))

    return []