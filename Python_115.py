
def max_fill(grid, capacity):
    # Initialize variables
    rows = len(grid)
    cols = len(grid[0])
    water_level = 0
    moves = 0

    # Fill the buckets with water
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water_level += 1

    # Empty the buckets
    while water_level > 0:
        moves += 1
        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1 and water_level >= capacity:
                    water_level -= capacity
                    grid[i][j] = 0

    return moves