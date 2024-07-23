import math

def fuel_cost(vector):
    return sum(math.floor(i/3)-2 for i in vector)

vector = [1, 2, 3]
print(fuel_cost(vector))