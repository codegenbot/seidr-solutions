```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = [(grid[0][0], [grid[0][0]])]
    min_path = []

    while queue:
        val, path = queue.pop(0)
        if len(path) == k + 1:
            if not min_path or path < min_path:
                min_path = path
            continue

        for dx, dy in directions:
            x, y = (val // n) + dx, val % n + dy
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                visited[x][y] = True
                queue.append((grid[x][y], path + [grid[x][y]]))

    return min_path