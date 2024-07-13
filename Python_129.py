def minPath(grid, k):
    n = len(grid)
    m = [[(i * n + j, i, j) for j in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            if grid[i][j] != i * n + j + 1:
                return []
    queue = [(0, [m[0][0][0]], m[0][0][1:])]
    visited = set()
    while queue:
        path, lst, pos = heapq.heappop(queue)
        if len(path) == k:
            return lst
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            new_x, new_y = pos[0] + x, pos[1] + y
            if 0 <= new_x < n and 0 <= new_y < n and m[new_x][new_y] not in visited:
                visited.add(m[new_x][new_y])
                heapq.heappush(
                    queue,
                    (
                        path + [(m[new_x][new_y][0], new_x, new_y)],
                        lst + [m[new_x][new_y][0]],
                        (new_x, new_y),
                    ),
                )
    return []