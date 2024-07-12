import math
nums = list(map(int, input().split()))
result = sum((math.ceil(num / 3) - 2) for num in nums)
print(result)