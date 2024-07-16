```
import math

vector = [7, 3, 15]

def fuel_cost(vector):
    return sum(calculate_fuel(i) for i in vector)

def calculate_fuel(amount):
    total = 0
    while amount > 2:
        amount = math.floor(amount / 3)
        total += amount - 2
    return total

print(fuel_cost(vector))