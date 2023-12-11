import math

def fuel_cost(numbers):
    return sum([math.floor(x/3) - 2 for x in numbers])

numbers = [int(input()) for _ in range(int(input()))]
print(fuel_cost(numbers))