import math
numbers = list(map(int, input().split()))
total = sum([math.floor(num/3) - 2 for num in numbers])
print(total)