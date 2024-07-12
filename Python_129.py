```
def minPath(grid, k):
    N = len(grid)
    n = N * N
    for i in range(n):
        if grid[i//N][i%N] == i+1:
            break
    res = [grid[i//N][i%N]]
    for _ in range(k-1):
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        direction = None
        min_val = float('inf')
        for d in directions:
            x, y = i//N+d[0], i%N+d[1]
            if 0 <= x < N and 0 <= y < N:
                val = grid[x][y]
                if val not in res:
                    diff = abs(val - res[-1])
                    if diff < min_val:
                        min_val = diff
                        direction = d
        i //= N + direction[0] * N; i %= N + direction[1] * N
        res.append(grid[i//N][i%N])
    return res