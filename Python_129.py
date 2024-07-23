def sumEvenGrid(grid):
    res = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] % 2 == 0:
                res.append(int(grid[i][j]))
    return sum(res)