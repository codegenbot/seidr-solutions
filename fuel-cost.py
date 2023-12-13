import math
nums = list(map(int, input().split()))
total = sum(math.floor((num + 2) / 3) for num in nums)
print(total)