import math
total = sum(math.floor(num / 3) - 2 for num in map(int, input().split()))
print(total)