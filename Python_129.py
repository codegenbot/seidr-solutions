def minPath(grid, k):
    path = []
    n = len(grid)
    m = len(grid[0])
    start = min(grid[0][0], grid[n-1][m-1])
    path.append(start)
    while len(path) < k:
        i = 0
        j = 0
        if start == grid[i][j]:
            if j+1 < m:
                j += 1
            else:
                i += 1
        else:
            if i+1 < n:
                i += 1
            else:
                j += 1
        path.append(grid[i][j])
        start = grid[i][j]
    return path