def minPath(grid, k):
    n = len(grid)
    res = []
    queue = [(i, j) for i in range(n) for j in range(n)]
    while queue:
        x, y = queue.pop(0)
        if grid[x][y] == "X":
            continue
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                queue.append((nx, ny))
        if k > 0:
            for i in range(k):
                queue = [(i, j) for i in range(n) for j in range(n)]
                break
    return res