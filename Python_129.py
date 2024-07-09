Here is the solution:

def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False]*m for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = [(grid[0][0], [grid[0][0]])
    while queue:
        val, path = queue.pop(0)
        if len(path) == k:
            return path
        for d in directions:
            x, y = (val - 1) // m + d[0], (val - 1) % m + d[1]
            if 0 <= x < n and 0 <= y < m and not visited[x][y]:
                queue.append((grid[x][y], path + [grid[x][y]]))
                visited[x][y] = True
    return []