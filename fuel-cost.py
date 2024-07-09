```python
import math

def fuel_cost(input_vector):
    return sum(math.floor(i / 3) - 2 for i in input_vector)