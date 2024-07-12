import math

nums = [int(num) for num in input().split()]
result = sum((math.floor(num / 3) - 2) for num in nums)
print(result)