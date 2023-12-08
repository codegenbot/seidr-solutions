import math
nums = [int(num) for num in input().split()]
total = sum(math.floor(num / 3) - 2 for num in nums)
print(total)