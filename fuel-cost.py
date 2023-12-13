import math

def fuel_cost(vector):
    numbers = list(map(int, vector.split()))
    return sum((x // 3 - 2) for x in numbers)