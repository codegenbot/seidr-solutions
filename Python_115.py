```Python
def max_fill(grid: List[List[int]], capacity: int) -> int:
    total_water = 0
    for row in grid:
        min_row_value = min(row)
        if total_water + (capacity - min_row_value) >= min_row_value:
            total_water += capacity - min_row_value
        else:
            total_water += min_row_value
    return math.ceil(total_water / capacity)