import math

def fuel_cost(vector):
    return sum(math.floor(i / 3) - 2 for i in map(int, vector.split()))

print(fuel_cost('5154 1540 7412 9422 7108 7428 6893 4801'))