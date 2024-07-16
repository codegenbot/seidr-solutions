```
import math

def fuel_cost(vector):
    return sum(calculate_fuel(i) for i in vector)

def calculate_fuel(amount):
    total = 0
    while amount > 2:
        amount = math.floor(amount / 3)
        total += amount - 2
    return total