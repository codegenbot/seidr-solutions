def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    queue = []
    path = []

    # Check if the length of the path is greater than the number of elements in the grid
    if k > n * m:
        raise ValueError(
            "Path length cannot be greater than the number of elements in the grid"
        )

    # Enqueue the first cell
    queue.append((0, 0))
    visited[0][0] = True

    # Loop until the queue is empty or the path length is k
    while queue and len(path) < k:
        # Dequeue a cell
        i, j = queue.pop(0)

        # Add the cell to the path
        path.append(grid[i][j])

        # Check neighbors
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            # Get neighbor coordinates
            ni = i + di
            nj = j + dj

            # Skip if the neighbor is out of bounds or already visited
            if not (0 <= ni < n and 0 <= nj < m) or visited[ni][nj]:
                continue

            # Enqueue the neighbor
            queue.append((ni, nj))
            visited[ni][nj] = True

    return path