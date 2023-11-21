def calculate_fuel_cost(numbers):
    total_cost = 0
    for num in numbers:
        fuel_cost = (num // 3) - 2
        while fuel_cost > 0:
            total_cost += fuel_cost
            fuel_cost = (fuel_cost // 3) - 2
    return total_cost


numbers = list(map(int, input().split()))
result = calculate_fuel_cost(numbers)
print(result)