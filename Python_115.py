def max_fill(grid, capacity):
    # Initialize a variable to keep track of the number of times we need to lower the buckets
    count = 0

    # Loop through each row in the grid
    for i in range(len(grid)):
        # Get the current row and its length
        row = grid[i]
        length = len(row)

        # Initialize a variable to keep track of the number of buckets we need to use for this row
        num_buckets = 0

        # Loop through each element in the current row
        for j in range(length):
            # Check if the element is equal to 1, which means there is water in this well
            if row[j] == 1:
                # Increment the number of buckets we need to use for this row
                num_buckets += 1

        # Calculate the total capacity needed for this row by multiplying the number of buckets by the bucket capacity
        total_capacity = num_buckets * capacity

        # Check if the total capacity is greater than the length of the current row, which means we need to lower the buckets more times
        if total_capacity > length:
            count += (total_capacity - length) // capacity

    return count