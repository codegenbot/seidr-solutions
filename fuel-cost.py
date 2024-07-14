import math
def fuel_cost(vector):
    return sum(math.floor(i / 3) - 2 for i in vector)


vector = list(map(int, input("Enter space-separated positive integers: ").split()))
print(fuel_cost(vector))