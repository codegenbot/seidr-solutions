def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    while len(path) < k:
        found_next = False
        for i, j in visited:
            for di, dj in directions:
                ni, nj = (i + di) % n, (j + dj) % n
                if grid[ni][nj] >= path[-1]:
                    path.append(grid[ni][nj])
                    visited.remove((ni, nj))
                    found_next = True
                    break
            if found_next:
                break

        if not found_next:
            next_val = min(neighbor_val for i, j in visited for di, dj in directions
                           if (i + di) % n == ni and (j + dj) % n == nj
                           and grid[i][j] >= path[-1])
            if next_val >= path[-1]:
                path.append(next_val)
                visited.remove((ni, nj))
            else:
                break

    return path