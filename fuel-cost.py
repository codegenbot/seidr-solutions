def calculate_fuel_cost(numbers):
    return sum((num - 2) // 3 for num in numbers)