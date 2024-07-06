def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = [[0 for _ in range(cols)] for _ in range(rows)]

    # Initialize a variable to keep track of the number of cells that can be filled
    count = 0

    # Loop over all rows and columns
    for i in range(rows):
        for j in range(cols):
            # Check if the current cell is a water cell and has water capacity greater than or equal to `capacity`
            if grid[i][j] == 1 and water[i][j] >= capacity:
                # Fill the cell with water and increment the count of filled cells
                water[i][j] += 1
                count += 1

    return count