
# Import the math module
import math

# Define a function to calculate the maximum amount of water that can be filled in a grid of size (m x n)
def max_fill(grid, capacity):
    # Initialize variables for rows and columns
    rows = len(grid)
    cols = len(grid[0])
    
    # Initialize variable for the total water that can be filled
    water = 0
    
    # Loop through each row of the grid
    for i in range(rows):
        # Loop through each column of the current row
        for j in range(cols):
            # Check if the current cell is a water source (represented by the value 1)
            if grid[i][j] == 1:
                # Calculate the amount of water that can be filled in the current cell
                water += capacity - i
    
    # Return the total amount of water that can be filled
    return math.ceil(water / capacity)