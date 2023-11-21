import math

def calculate_fuel_cost(numbers):
    total_fuel_cost = 0
    for num in numbers:
        fuel_cost = math.floor(num / 3) - 2
        total_fuel_cost += fuel_cost
    return total_fuel_cost

numbers = list(map(int, input().split()))
result = calculate_fuel_cost(numbers)
print(result)