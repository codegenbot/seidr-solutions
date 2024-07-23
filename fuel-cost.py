import math
result = sum(math.floor(int(num) / 3) - 2 for num in input().split())
print(result)