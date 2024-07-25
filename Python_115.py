```
def max_fill(grid, capacity):
    """Calculate the maximum number of buckets that can be filled with water.

    Args:
        grid (list): A 2D list representing the height of each bucket.
        capacity (int): The total capacity of all buckets.

    Returns:
        int: The maximum number of buckets that can be filled with water.
    """
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(1 for row in grid for cell in row if cell > 0)

    for i in range(cols):
        for j in range(rows):
            if grid[j][i] > 0:
                amount_to_fill = min(grid[j][i], capacity)
                grid[j][i] -= amount_to_fill
                capacity -= amount_to_fill

    return math.ceil(total_water / (capacity + rows * cols - total_water))