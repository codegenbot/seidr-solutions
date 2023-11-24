from math import ceil

def fuel_cost(vector):
    return sum([ceil(x / 3) - 2 for x in vector])

vector = list(map(int, input().split()))
print(fuel_cost(vector))