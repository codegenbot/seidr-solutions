```
def max_fill(n, capacity_grid):
    rows = [row for row in capacity_grid]
    cols = len(rows[0])
    total_water = sum(len(row) for row in rows)
    max_capacity = min(row[:1] for row in rows).pop()
    return math.ceil(total_water / (n * max_capacity))