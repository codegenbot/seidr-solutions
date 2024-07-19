def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    
    while len(path) < k:
        found_next = False
        curr_i, curr_j = [idx for idx, val in enumerate(grid) if start in val][0], grid[[idx for idx, val in enumerate(grid) if start in val][0]].index(start)
        for di, dj in directions:
            ni, nj = (curr_i + di) % n, (curr_j + dj) % n
            if (ni, nj) in visited:
                path.append(grid[ni][nj])
                visited.remove((ni, nj))
                found_next = True
                start = grid[ni][nj]
                break
        if not found_next:
            path.append(path[-1])

    return path