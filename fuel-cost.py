import math

def fuel_cost(numbers):
    return sum([math.floor(num/3) - 2 for num in numbers])

# Read input from user
numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except EOFError:
        break

# Call the function and print the result
print(fuel_cost(numbers))