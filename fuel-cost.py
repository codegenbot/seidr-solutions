import math

def calculate_fuel_cost(number):
    return sum(math.floor(num / 3) - 2 for num in [int(num) for num in number.split()])

numbers = input()

result = calculate_fuel_cost(numbers)
print(result)