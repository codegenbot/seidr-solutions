import math

total = sum(math.floor(int(x) / 3) - 2 for x in input().split())
print(total)