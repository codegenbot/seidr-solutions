def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = set()
    queue = [(grid[0][0], [grid[0][0]])]

    while queue:
        val, path = queue.pop(0)
        if len(path) == k + 1:
            return path
        for d in directions:
            x, y = (path[-1] // n + d[0]) % n, (path[-1] % n + d[1]) % n
            new_val = grid[x][y]
            if new_val not in visited and (x, y) != (0, 0):
                queue.append((new_val, path + [new_val]))
                visited.add(new_val)
    return []