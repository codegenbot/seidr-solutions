
Here's a corrected version of the code:
```python
def fuel_cost(vec):
    return sum([math.floor(x / 3) - 2 for x in vec]) + len(vec) * 2
```