def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = (total_water + capacity - 1) // capacity
    remaining_capacity = max_water * capacity - total_water

    while remaining_capacity > 0:
        for row in grid:
            if remaining_capacity == 0:
                continue
            for i in range(len(row)):
                if remaining_capacity == 0:
                    break
                add_water = min(remaining_capacity, capacity - row[i])
                row[i] += add_water
                remaining_capacity -= add_water
    return grid