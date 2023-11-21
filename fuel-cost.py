import math
def calculate_fuel_cost(numbers):
    return sum(math.floor(num / 3) for num in numbers) - 2 * len(numbers)
numbers = list(map(int, input().split()))
result = calculate_fuel_cost(numbers)
print(result)