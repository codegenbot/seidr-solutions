def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = set()
    queue = []

    # Add the first cell to the queue and mark it as visited
    queue.append((0, 0))
    visited.add((0, 0))

    # Loop until we have found a path of length k or the queue is empty
    while len(queue) > 0 and len(visited) < k:
        # Get the next cell from the queue
        i, j = queue.pop(0)

        # Check if we have reached the end of the grid
        if i == n - 1 and j == m - 1:
            return [grid[i][j]]

        # Add the neighbors of the current cell to the queue
        for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            if 0 <= i + di < n and 0 <= j + dj < m and (i + di, j + dj) not in visited:
                queue.append((i + di, j + dj))
                visited.add((i + di, j + dj))

    # Return the path of length k
    return [grid[i][j] for i, j in queue[:k]]