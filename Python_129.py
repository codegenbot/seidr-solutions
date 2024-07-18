def minPath(grid, k):
    n = len(grid)
    pos = min((i, j) for i in range(n) for j in range(n))
    path = [grid[pos[0]][pos[1]]
    
    for _ in range(min(k-1, n*n-1)):
        i, j = pos
        next_pos = min(
            (x, y)
            for x in range(max(0, i - 1), min(n, i + 2))
            for y in range(max(0, j - 1), min(n, j + 2))
        )
        path.append(grid[next_pos[0]][next_pos[1]])
        pos = next_pos
    
    return path