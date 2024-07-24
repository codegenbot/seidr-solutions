```
def minPath(grid, k):
    N = len(grid)
    for i in range(N):
        for j in range(N):
            if grid[i][j] == '0':
                grid[i][j] = str(int(str(i)+str(j)))
    queue = [(0, 0, [])]
    res = None
    while queue:
        row, col, path = queue.pop(0)
        if len(path) == k:
            res = tuple(sorted(set(path)))
        else:
            for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nr, nc = row + dr, col + dc
                if 0 <= nr < N and 0 <= nc < N:
                    if grid[nr][nc] == str(int(str(row)+str(col)))[len(str(i))+1:]:
                        queue.append((nr, nc, path + [grid[nr][nc]]))
    return res

grid = [["1", "0", "1"], ["0", "0", "0"], ["1", "0", "1"]]
k = 3
print(minPath(grid, k))