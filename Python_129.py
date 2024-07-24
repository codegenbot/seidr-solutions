def minPath(grid, k):
    n = len(grid)
    m = [[i + j * n for j in range(n)] for i in range(n)]
    max_val = n * n
    res = []
    for x in range(n):
        for y in range(n):
            if grid[x][y] <= k:
                res.append(str(grid[x][y]))
                k -= 1
                if k == 0:
                    return [int(i) for i in res]
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    queue = [(m[0][0], m[0][0])]
    visited = set((0, 0))
    while queue:
        cell_value, path = heapq.heappop(queue)
        if len(path) == k:
            return [int(i) for i in path]
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if (
                1 <= nx < n
                and 1 <= ny < n
                and (nx, ny) not in visited
                and cell_value + m[nx][ny] - 2 * m[x][y] <= max_val
            ):
                heapq.heappush(
                    queue, ((cell_value + m[nx][ny] - 2 * m[x][y]), path + [m[nx][ny]])
                )
                visited.add((nx, ny))
    return []