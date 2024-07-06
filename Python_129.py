def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = set()
    queue = [(0, 0)]
    path = []

    while queue:
        # Pop the first element from the queue
        i, j = queue.pop(0)

        # Check if we have reached the end of the grid
        if i == n - 1 and j == m - 1:
            break

        # Add unvisited neighbors to the queue
        for x, y in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]:
            if 0 <= x < n and 0 <= y < m and grid[x][y] not in visited:
                queue.append((x, y))
                visited.add(grid[x][y])

    # Return the path
    for i in range(k):
        path.append(queue[i].pop())
    return path