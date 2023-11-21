def calculate_fuel_cost(numbers):
    total_fuel_cost = sum((num // 3) - 2 for num in numbers)
    return total_fuel_cost

numbers = [int(x) for x in input().split()]
result = calculate_fuel_cost(numbers)
print(result)