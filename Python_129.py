```
def minPath(grid, k):
    n = len(grid)
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                start = (i, j)
                break
    queue = [(start, [grid[start[0]][start[1]]])]
    min_sum = float('inf')
    visited = set([str(start)])
    while queue and len(queue[-1][1]) < k:
        path, values = queue.pop(0)
        if len(values) == k:
            min_sum = min(min_sum, sum(values))
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = path[0] + dx, path[1] + dy
            if 0 <= x < n and 0 <= y < n and str((x, y)) not in visited:
                queue.append(((x, y), values + [grid[x][y]]))
                visited.add(str((x, y)))
    return min_path for min_path, _ in queue if sum(min_path[1]) == min_sum][0][1]