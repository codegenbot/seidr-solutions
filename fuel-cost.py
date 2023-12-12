
[PYTHON]
from math import floor

def fuel_cost(vector):
    return sum([floor(x / 3) - 2 for x in vector])
[/PYTHON]

This code uses the `math.floor` function to round each element of the input vector down to the nearest integer, and then subtracts 2 from each result. The `sum` function is then used to calculate the total cost of fuel for all elements in the vector.