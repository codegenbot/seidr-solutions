```
def minPath(grid, k):
    N = len(grid)
    queue = [(i, j, []) for i in range(N) for j in range(N)]
    res = None
    while queue:
        row, col, path = queue.pop(0)
        if len(path) == k:
            res = tuple(path)
        else:
            for nr in range(N):
                for nc in range(N):
                    if (nr, nc) not in path and grid[nr][nc]:
                        queue.append((nr, nc, path + [f"{grid[row][col]}{grid[nr][nc]}"]))
    return res

grid = [["1", "0", "1"], ["0", "0", "0"], ["1", "0", "1"]]
k = 3
print(minPath(grid, k))