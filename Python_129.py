```
def minPath(grid, k):
    N = len(grid)
    queue = [(0, 0, 0)]
    res = float('inf')
    while queue:
        row, col, total = queue.pop(0)
        if row == N - 1 and col == N - 1:
            res = min(res, total)
        else:
            for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nr, nc = row + dr, col + dc
                if 0 <= nr < N and 0 <= nc < N:
                    queue.append((nr, nc, total + int(grid[nr][nc])))
    return res

grid = [["1", "0", "1"], ["0", "0", "0"], ["1", "0", "1"]]
k = 3
print(minPath(grid, k))