import math

def fuel_cost(nums):
    new_nums = [math.floor(num/3) - 2 for num in nums]
    return sum(new_nums)

# Read input from user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

# Call the function and print the result
result = fuel_cost(nums)
print(result)