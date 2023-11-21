def calculate_fuel_cost(numbers):
    cost = 0
    for num in numbers:
        cost += (num // 3) - 2
    return cost


numbers = list(map(int, input().split()))
result = calculate_fuel_cost(numbers)
print(result)