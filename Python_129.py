def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    path = [grid[start[0]][start[1]]]
    visited = {(start[0], start[1])}

    while len(path) < min(k, n * n) and len(visited) < n * n:
        x, y = path[-1]
        for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                visited.add((nx, ny))
                path.append(grid[nx][ny])

    return path[:k]