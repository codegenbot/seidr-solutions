
def max_fill(grid, capacity):
    # Initialize a variable to keep track of the number of times we need to lower the buckets
    count = 0

    # Loop through each row in the grid
    for i in range(len(grid)):
        # Initialize a variable to keep track of the total amount of water in the current row
        total_water = 0

        # Loop through each column in the current row
        for j in range(len(grid[i])):
            # Check if the current cell contains water (represented by a 1)
            if grid[i][j] == 1:
                # Increment the total amount of water in the current row
                total_water += 1

        # Calculate the number of buckets needed to empty the current row
        num_buckets = math.ceil(total_water / capacity)

        # Update the count with the number of buckets needed
        count += num_buckets

    return count