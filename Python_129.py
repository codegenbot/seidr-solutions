
def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = set()
    queue = deque([(0, 0)])
    path = []

    while queue:
        x, y = queue.popleft()
        if (x, y) not in visited:
            visited.add((x, y))
            path.append(grid[x][y])
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nx = x + dx
                ny = y + dy
                if 0 <= nx < n and 0 <= ny < m and (nx, ny) not in visited:
                    queue.append((nx, ny))
        if len(path) == k:
            break

    return path