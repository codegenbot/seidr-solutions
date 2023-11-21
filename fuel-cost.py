import math


def calculate_fuel_cost(numbers):
    return sum((num - 2) // 3 for num in numbers)


numbers = list(map(int, input().split()))
result = calculate_fuel_cost(numbers)
print(result)