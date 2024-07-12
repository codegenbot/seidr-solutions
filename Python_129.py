```
def minPath(grid, k):
    N = len(grid)
    path = []
    for i in range(N * N):
        if i % N == 0:
            x, y = 0, i // N
        elif i % N == N - 1:
            x, y = N - 1, i // N
        else:
            x, y = (i // N, i % N)
        path.append(grid[x][y])
    return sorted(path[:k+1])