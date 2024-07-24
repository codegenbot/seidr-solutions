```
def minPath(grid, k):
    N = len(grid)
    queue = [(0, 0, [])]
    res = None
    while queue:
        row, col, path = queue.pop(0)
        if (row == N-1 and col == N-1) and len(path) == k:
            res = tuple(path)
        elif (row == N-1 or col == N-1):
            for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nr, nc = row + dr, col + dc
                if 0 <= nr < N and 0 <= nc < N:
                    queue.append((nr, nc, path + [grid[nr][nc]]))
        else:
            for dr, dc in [(0, 1), (1, 0)]:
                nr, nc = row + dr, col + dc
                if 0 <= nr < N and 0 <= nc < N:
                    queue.append((nr, nc, path + [grid[nr][nc]]))
    return res

grid = [["1", "0", "1"], ["0", "0", "0"], ["1", "0", "1"]]
k = 3
print(minPath(grid, k))