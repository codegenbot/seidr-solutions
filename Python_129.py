
def minPath(grid, k):
    # Initialize the minimum path and its length
    min_path = []
    min_len = float("inf")

    # Loop through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # If the current cell is not the starting point, skip it
            if grid[i][j] != 1:
                continue

            # Initialize a queue to perform BFS
            queue = [(i, j)]

            # Perform BFS until we reach the end of the path or the distance from the starting point exceeds k
            while queue and len(queue) <= k:
                x, y = queue.pop(0)

                # If we have reached the end of the path or the distance from the starting point exceeds k, update the minimum path and its length
                if grid[x][y] == k or len(queue) > k:
                    min_path = [(i, j)] + queue
                    min_len = len(queue)
                    break

                # Add neighbors to the queue
                for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                    nx, ny = x + dx, y + dy
                    if 0 <= nx < len(grid) and 0 <= ny < len(grid[i]):
                        queue.append((nx, ny))

    # Return the minimum path
    return min_path