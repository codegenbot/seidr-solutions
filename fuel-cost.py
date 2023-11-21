def calculate_fuel_cost(numbers):
    return sum((num // 3) - 2 for num in numbers)

numbers = list(map(int, input().split()))

total_fuel_cost = calculate_fuel_cost(numbers)
print(total_fuel_cost)