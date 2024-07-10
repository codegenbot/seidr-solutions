def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if total_water <= capacity:
        return len(grid)
    total_rows = 0
    remaining_capacity = capacity
    for water_level in sorted(set([num for row in grid for num in row])):
        rows_to_fill = math.ceil(
            (water_level - (capacity - remaining_capacity)) / (water_level or 1)
        )
        if rows_to_fill > 0:
            total_rows += rows_to_fill
            remaining_capacity -= water_level * rows_to_fill
            if remaining_capacity <= 0:
                return total_rows + 1
    return total_rows