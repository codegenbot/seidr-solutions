import math

def fuel_cost(nums):
    return sum(math.floor(num/3) - 2 for num in nums)

# Read input from user
nums = []
while True:
    try:
        nums.append(int(input()))
    except EOFError:
        break

# Call the function and print the result
result = fuel_cost(nums)
print(result)