```
N = int(input("Enter the number of rows: "))
grid = []
for _ in range(N):
    row = list(input().split())
    grid.append(row)
k = int(input("Enter the value of k: "))
res = None
queue = [(0, 0, [])]
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

print(minPath())