import math

numbers = list(map(int, input().split()))
total = sum(num // 3 for num in numbers)
print(total)