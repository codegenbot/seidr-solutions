def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    path = [grid[start[0]][start[1]]]
    visited = {(start[0], start[1])}

    while len(path) < k + 1:
        x, y = visited.pop()
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                visited.add((nx, ny))
                path.append(grid[nx][ny])

    return path 
