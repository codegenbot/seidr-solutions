def minPath(grid, k):
    # Initialize variables
    rows = len(grid)
    cols = len(grid[0])
    visited = set()
    queue = deque([(0, 0)])
    path = []

    while queue:
        row, col = queue.popleft()
        if (row, col) not in visited:
            visited.add((row, col))
            path.append(grid[row][col])
            for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                r = row + dr
                c = col + dc
                if 0 <= r < rows and 0 <= c < cols and (r, c) not in visited:
                    queue.append((r, c))
        if len(path) == k:
            break

    return path