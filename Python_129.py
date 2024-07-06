def minPath(grid, k):
    # Initialize the minimum path and its length
    min_path = []
    min_path_len = float("inf")

    # Initialize the queue with all possible starting points
    queue = [(row, col) for row in range(len(grid)) for col in range(len(grid[0]))]

    # Loop until the queue is empty or the minimum path length is reached
    while queue and len(min_path) < min_path_len:
        # Get the next starting point from the queue
        row, col = queue.popleft()

        # Initialize the current path and its length
        cur_path = [grid[row][col]]
        cur_path_len = 1

        # Loop until the current path length is equal to k or the grid boundary is reached
        while cur_path_len < k:
            # Get the neighboring cells that have not been visited
            neighbors = [
                (row + i, col + j)
                for i in range(-1, 2)
                for j in range(-1, 2)
                if 0 <= row + i < len(grid)
                and 0 <= col + j < len(grid[0])
                and (row + i, col + j) not in cur_path
            ]

            # If there are no neighboring cells that have not been visited, break the loop
            if not neighbors:
                break

            # Add the next cell to the current path
            row, col = neighbors[0]
            cur_path.append(grid[row][col])
            cur_path_len += 1

        # If the current path length is less than the minimum path length, update the minimum path and its length
        if len(cur_path) < min_path_len:
            min_path = cur_path
            min_path_len = len(min_path)

    return min_path