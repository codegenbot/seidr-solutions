def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    queue = [(grid[0][0], [grid[0][0]])]
    result = []

    while queue:
        cell_value, path = queue.pop(0)
        if len(path) == k + 1:
            result = sorted(list(set(path)))
            return result

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x = path[-1] // N
            y = path[-1] % N
            if 0 <= x < N and 0 <= y < N and not visited[x][y]:
                queue.append((grid[x][y], path + [grid[x][y]]))
                visited[x][y] = True

    return []