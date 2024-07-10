def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                res.append(1)
                break
    for _ in range(k - 1):
        temp = []
        for num in res[-k + 1 :]:
            for i in range(n):
                for j in range(n):
                    if grid[i][j] == num:
                        if [i, j] not in [
                            (x, y) for x in range(n) for y in range(n)
                        ] or _ == 0:
                            temp.append(num)
        res.extend(temp[: k - 1])
    return res