def max_fill(grid, capacity):
    # Initialize variables to keep track of the total water filled and the number of buckets used
    total_water = 0
    num_buckets = 0

    # Loop through each row in the grid
    for row in grid:
        # Initialize a variable to keep track of the water filled in the current row
        row_water = 0

        # Loop through each column in the current row
        for col in row:
            # Check if the current well has water
            if col == 1:
                # Add the capacity of the bucket to the total water filled and increment the number of buckets used
                total_water += capacity
                num_buckets += 1

                # Set the current well to 0 to indicate that it has been filled
                row[col] = 0

        # Check if the row is empty
        if not any(row):
            # If the row is empty, break out of the loop
            break

    # Return the number of times the buckets were used
    return num_buckets