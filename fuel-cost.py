import math

def fuel_cost(numbers):
    return int(sum([math.floor(num/3) - 2 for num in numbers]))

numbers = list(map(int, input().split()))
print(fuel_cost(numbers))