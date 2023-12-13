```python
import math

def fuel_cost(vector):
    vector = list(map(int, vector.split()))
    return sum([math.floor(x/3) - 2 for x in vector])

input_string = input()
print(fuel_cost(input_string))
```