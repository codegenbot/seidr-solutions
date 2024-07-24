```
def minPath(grid, k):
    N = len(grid)
    queue = [(0, 0, [])]
    res = None
    while queue:
        row, col, path = queue.pop(0)
        if len(path) == k:
            res = tuple(sorted(set(path)))
        else:
            for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nr, nc = row + dr, col + dc
                if 0 <= nr < N and 0 <= nc < N and grid[nr][nc] != '0':
                    queue.append((nr, nc, path + [grid[nr][nc]]))
    return res

N = int(input("Enter number of rows: "))
M = int(input("Enter number of columns: "))
grid = []
for i in range(N):
    row = input(f"Enter row {i+1}: ").split()
    grid.append(row)

k = int(input("Enter k: "))
print(minPath(grid, k))