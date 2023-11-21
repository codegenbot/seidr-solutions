def calculate_fuel_cost(numbers):
    total_sum = sum(numbers)
    total_fuel_cost = (total_sum // 3) - 2 * len(numbers)
    return total_fuel_cost


numbers = [int(x) for x in input().split()]
result = calculate_fuel_cost(numbers)
print(result)