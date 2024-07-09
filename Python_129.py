if grid[x][y] == 1:
    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        nx, ny = x + dx, y + dy
        if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny] and grid[nx][ny] != 2:
            visited[nx][ny] = True
            queue.append((nx, ny, path + [grid[nx][ny]]))
else:
    if x == N - 1 and y == N - 1:
        if len(path) - 1 == k:
            res = list(path[:-1])