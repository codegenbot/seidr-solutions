import math

def fuel_cost(vector):
    return sum([math.floor(num/3) - 2 for num in vector])

vector = []
nums = input().split()
vector.extend([int(num) for num in nums])

print(fuel_cost(vector))