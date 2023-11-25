import math

def fuel_cost(nums):
    return sum([math.floor(num/3) - 2 for num in nums])

nums = []
while True:
    try:
        nums.append(int(input()))
    except EOFError:
        break

result = fuel_cost(nums)
print(result)