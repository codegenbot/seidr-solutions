import math

def fuel_cost():
    vector = list(map(int, input().split()))
    return sum(math.floor(i/3) - 2 for i in vector)

print(fuel_cost())