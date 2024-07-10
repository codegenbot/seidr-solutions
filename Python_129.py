def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    m.sort(key=lambda x: grid[x[0]][x[1]])
    res = [grid[m[i][0]][m[i][1]] for i in range(k)]
    return res