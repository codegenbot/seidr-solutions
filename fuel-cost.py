import math

def fuel_cost(vector):
    return sum([(math.floor(x / 3) - 2) for x in vector])

vector = [int(x) for x in input().split()]
print(fuel_cost(vector))