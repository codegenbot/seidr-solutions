Here is the solution to the problem:

```python
def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    full_buckets = math.floor(total_water / float(capacity))
    remaining_water = total_water % capacity if total_water % capacity != 0 else capacity - 1

    return full_buckets + (total_water > capacity * (full_buckets + 1))