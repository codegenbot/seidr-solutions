import math

def fuel_cost(numbers):
    new_numbers = [math.floor(num/3) - 2 for num in numbers]
    return sum(new_numbers)

# Read input from user
numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except EOFError:
        break

# Call the function and print the result
result = fuel_cost(numbers)
print(result)