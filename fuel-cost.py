import math
def fuel_cost(numbers):
    return sum([num//3 for num in numbers])
numbers = list(map(int, input().split()))
print(fuel_cost(numbers))