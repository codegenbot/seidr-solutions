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
            for cell in set([grid[i][j] for i in range(N) for j in range(N)]):
                if grid[row][col] == cell and len(path)+1 <= k:
                    queue.append((row, col, path + [cell]))
    return res

grid = [["1", "0", "1"], ["0", "0", "0"], ["1", "0", "1"]]
k = 3
print(minPath(grid, k))