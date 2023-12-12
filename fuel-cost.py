import math

def fuel_cost(nums):
    return sum([math.floor(num/3) - 2 for num in nums])

# Read input from user
nums = [int(input()) for _ in range(2)]

# Call the function and print the result
print(fuel_cost(nums))