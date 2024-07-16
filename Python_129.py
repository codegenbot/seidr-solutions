def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        i, j = min(visited, key=lambda cell: grid[cell[0]][cell[1]])
        path.append(grid[i][j])
        visited.remove((i, j))  # Move this line inside the while loop just before the if statement
        for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
                visited.add((ni, nj))
        if len(path) >= k and grid[i][j] == start:
            break

    return path[:k]