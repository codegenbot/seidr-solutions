def minPath(grid, k):
    # Initialize the minimum path and its length
    min_path = []
    min_len = float("inf")

    # Iterate over all cells in the grid
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            # Check if the current cell is the starting point
            if grid[i][j] == 1:
                # Initialize a queue to perform BFS
                queue = [(i, j, 0)]
                visited = set()

                # Perform BFS until we find a path of length k or all cells have been visited
                while queue and len(min_path) < min_len:
                    # Get the next cell from the queue
                    x, y, dist = queue.pop(0)

                    # Check if the current cell is not in the visited set
                    if (x, y) not in visited:
                        # Add the current cell to the visited set
                        visited.add((x, y))

                        # Check if we have reached the target length
                        if dist == k:
                            # Update the minimum path and its length
                            min_path = [(x, y)]
                            min_len = dist
                            break

                        # Add the neighbors of the current cell to the queue
                        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                            nx, ny = x + dx, y + dy
                            if 0 <= nx < len(grid) and 0 <= ny < len(grid[i]):
                                queue.append((nx, ny, dist + 1))

    return min_path