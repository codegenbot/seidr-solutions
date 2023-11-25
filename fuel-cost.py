import math

def fuel_cost(nums):
    return sum([math.floor(num/3)-2 for num in nums])

# Read input from user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except EOFError:
        break

# Call the function and print the result
result = fuel_cost(nums)
print(result)