import math

nums = list(map(int, input().split()))
print(sum(math.floor((num / 3) - 2) for num in nums))