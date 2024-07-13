def minPath(grid, k):
    N = len(grid)
    for i in range(N):
        grid[i] = [(i * N + j, val) for j, val in enumerate(grid[i])]
    res = []
    cur_sum = sum(grid[0])
    for i in range(k):
        pos = sorted([(cur_sum, (i, 0)) if x < N // 2 else ((N * N) - x, (i, N - 1)) for x in grid[0]])[-1][1]
        res.append(grid[pos][1])
        cur_sum -= grid[pos][0]
    return res