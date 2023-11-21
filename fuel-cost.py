import math

def calculate_fuel_cost(numbers):
    return sum([math.floor(num/3) - 2 for num in numbers])

# Read input from user
numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except:
        break

# Call the function and print the result
result = calculate_fuel_cost(numbers)
print(result)