def max_fill(grid: List[List[int]], capacity: int) -> int:
    # Problem description:
    # Maximize the amount of water that can be held in a grid.
    # The grid contains the height of each block.
    # You have a bucket with a given capacity, and you want to fill it by pouring water from the blocks into the bucket.
    # For simplicity, assume that all blocks are connected and form a perfect square (grid shape is always square).
    # Each block can only be used once (if poured, it will remain empty).
    #
    # Function signature:
    # def max_fill(grid: List[List[int]], capacity: int) -> int

    if not grid or not all(len(row) == len(grid[0]) for row in grid):
        raise ValueError("Grid should be a square")

    total_water = 0
    for row in grid:
        water_per_row = min(capacity, sum(row))
        total_water += water_per_row
        capacity -= water_per_row if water_per_row > 0 else 0

    return math.ceil(total_water / max(1, capacity))