```
if grid[x][y] == 1 and len(path) - 1 == k:
    res = list(path[:-1])
elif grid[x][y] == 3:
    if not res or tuple(sorted(path)) < tuple(sorted(res)):
        res = list(path[:-1])