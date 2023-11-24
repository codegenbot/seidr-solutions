import math

def fuel_cost(vector):
    return sum([(math.floor(int(x) / 3) - 2) for x in vector])

vector = input().split()
print(fuel_cost(vector))