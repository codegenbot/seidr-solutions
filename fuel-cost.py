```python
def fuel_cost(vector):
    return sum((i - 2 - (i % 3) + 1) for i in vector)