```python
def fuel_cost(vector):
    return sum((i - 1) // 3 + 1 - 2 for i in vector)