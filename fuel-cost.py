import math
def calculate_fuel_cost(numbers):
    total_fuel_cost = sum(math.floor(num / 3) - 2 for num in numbers)
    return total_fuel_cost
numbers = list(map(int, input().split()))
result = calculate_fuel_cost(numbers)
print(result)