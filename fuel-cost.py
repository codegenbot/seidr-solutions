```
import math

def calculate_fuel(amount):
    return max(0, (amount // 3) - 2)

def fuel_cost(vector):
    return sum(calculate_fuel(int(i)) for i in vector)

vector = [int(x) for x in input().replace(" ", ",").split(",")]
print(fuel_cost(vector))