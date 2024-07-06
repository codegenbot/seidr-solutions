def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = set()
    queue = deque([(0, 0)])
    path = []

    # Loop until the queue is empty or the path length is k
    while queue and len(path) < k:
        # Get the current cell and its neighbors
        i, j = queue.popleft()
        neighbors = [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]

        # Filter out visited cells and add new cells to the queue
        for ni, nj in neighbors:
            if 0 <= ni < n and 0 <= nj < m and (ni, nj) not in visited:
                queue.append((ni, nj))
                visited.add((ni, nj))

        # Add the current cell to the path
        path.append(grid[i][j])

    return path