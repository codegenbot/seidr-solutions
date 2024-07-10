```
def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = [[False]*n for _ in range(n)]
    queue = [(grid[0][0], [grid[0][0]], 0)]
    result = None

    while queue:
        value, path, step = queue.pop(0)
        if step == k:
            if not result or sum(int(x) for x in path) < sum(int(x) for x in result):
                result = path
        else:
            for direction in directions:
                x, y = (value // n) + direction[0], (value % n) + direction[1]
                if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                    queue.append((grid[x][y], path + [grid[x][y]], step + 1))
                    visited[x][y] = True

    return result