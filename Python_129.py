def minPath(grid, k):
    N = len(grid)
    res = []
    for i in range(N):
        for j in range(N):
            if grid[i][j] == 1:
                res.append(1)
                break
    return res + [str(i) for i in res][:-k][::-1].split()[1:]