import math

def fuel_cost(numbers):
    return sum([math.floor(num/3) - 2 for num in numbers])

# Read input from user
numbers = list(map(int, input().split()))

# Call the function and print the result
print(fuel_cost(numbers))