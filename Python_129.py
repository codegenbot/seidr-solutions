def minPath(grid, k):
    n = len(grid)
    m = [[(i * j + c) for c in grid[i]] for i in range(n)]

    res = [0]
    while k > 1:
        for _ in range(k):
            idx = [(i, j) for i in range(n) for j in range(m[i].index(min(m[i])))][0]
            res.append(m[idx[0]][idx[1]])
            m[idx[0]].remove(min(m[idx[0]]))
            if all(
                i > 0 or j == n - 1
                for i, j in zip(*map(lambda x: [x[0], len(x) - x[-1]], m))
            ):
                break
        k -= 1
    return res