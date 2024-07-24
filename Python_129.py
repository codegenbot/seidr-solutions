```
def minPath(grid, k):
    N = len(grid)
    queue = [(0, 0, [])]
    res = float('inf')
    while queue:
        row, col, path = queue.pop(0)
        if len(path) == k:
            cost = sum(map(int, path))
            if cost < res:
                res = cost
        else:
            for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nr, nc = row + dr, col + dc
                if 0 <= nr < N and 0 <= nc < N:
                    queue.append((nr, nc, path + [grid[nr][nc]]))
    return res

grid = [["1", "0", "1"], ["0", "0", "0"], ["1", "0", "1"]]
k = 3
print(minPath(grid, k))