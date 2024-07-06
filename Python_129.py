
def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    total_cells = n * m
    visited = set()
    queue = deque([(0, 0, [])])

    while queue:
        x, y, path = queue.popleft()
        if (x, y) in visited:
            continue
        visited.add((x, y))
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            new_x = x + dx
            new_y = y + dy
            if 0 <= new_x < n and 0 <= new_y < m:
                queue.append((new_x, new_y, path + [grid[new_x][new_y]]))
        if len(path) == k:
            return path
    return None