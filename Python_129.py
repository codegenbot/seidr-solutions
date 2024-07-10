def findShortestPath(grid):
    N = len(grid)
    visited = [[False for _ in range(N)] for _ in range(N)]
    queue = [(0, 0, [grid[0][0]])]
    res = []

    while queue:
        x, y, path = queue.pop(0)
        if grid[x][y] == len(grid) * len(grid) - 1:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny] and grid[nx][ny] > path[-1]:
                visited[nx][ny] = True
                queue.append((nx, ny, path + [grid[nx][ny]]))

    return []