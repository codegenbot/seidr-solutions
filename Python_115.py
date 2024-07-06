def max_fill(grid, capacity):
    # Initialize variables
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    bucket_count = 0

    # Iterate through each row
    for i in range(rows):
        # Iterate through each column
        for j in range(cols):
            # Check if the current well has water
            if grid[i][j] == 1:
                # Calculate the amount of water in the well
                water_in_well = cols - j

                # Check if the bucket can hold all the water in the well
                if water_in_well <= capacity:
                    # Add the amount of water in the well to the total amount of water
                    total_water += water_in_well

                    # Increment the bucket count
                    bucket_count += 1

                    # Set the current well to empty
                    grid[i][j] = 0

    return bucket_count