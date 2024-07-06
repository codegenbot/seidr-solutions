```python
def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += len(row)
    return -(-total_water // capacity)