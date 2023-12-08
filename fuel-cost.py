
Here is the modified code that solves the problem:
```
def get_fuel_cost(input_vector):
    return sum([int((x / 3) - 2) for x in input_vector])
```