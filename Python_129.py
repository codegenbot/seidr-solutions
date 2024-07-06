def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = set()
    queue = deque([(0, 0, 0)])
    min_path = [1] * (k + 1)

    while queue:
        # Pop the first element from the queue
        i, j, count = queue.popleft()

        # If we have reached the end of the grid or visited this cell before, skip it
        if i == n - 1 and j == m - 1 or (i, j) in visited:
            continue

        # Mark this cell as visited
        visited.add((i, j))

        # If the count is equal to k, we have found a path of length k
        if count == k:
            min_path = [grid[i][j]] + min_path
            break

        # Add adjacent cells to the queue
        for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            if 0 <= i + di < n and 0 <= j + dj < m:
                queue.append((i + di, j + dj, count + 1))

    return min_path