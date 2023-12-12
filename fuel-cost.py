import math

def fuel_cost(numbers):
    return sum([math.floor(num/3) - 2 for num in numbers])