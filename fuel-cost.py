import math
def fuel_cost(vector):
    return sum([math.floor(num/3) - 2 for num in vector])
vector = list(map(int, input().split()))
print(fuel_cost(vector))