def max_fill(grid, capacity):
    # Initialize variables
    rows = len(grid)
    cols = len(grid[0])
    buckets = 0

    # Loop through each row and column
    for i in range(rows):
        for j in range(cols):
            # Check if the current position is a well with water
            if grid[i][j] == 1:
                # Calculate the number of buckets needed to empty the well
                num_buckets = math.ceil(grid[i][j] / capacity)

                # Update the total number of buckets needed
                buckets += num_buckets

    return buckets