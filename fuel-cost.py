import math

def fuel_cost(nums):
    return sum(math.floor(num/3) - 2 for num in nums)

nums = list(map(int, input().split()))

result = fuel_cost(nums)
print(result)