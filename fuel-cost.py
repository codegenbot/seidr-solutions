import math
total = sum(math.floor(int(num) / 3) - 2 for num in input().split())
print(total)