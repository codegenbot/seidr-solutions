import math

def fuel_cost(numbers):
    new_numbers = [math.floor(int(num)/3) - 2 for num in numbers]
    return sum(new_numbers)

numbers = input().split()
numbers = [int(num) for num in numbers]

result = fuel_cost(numbers)
print(result)