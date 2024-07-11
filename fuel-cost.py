from math import floor

numbers = list(map(int, input().split()))
result = sum([floor(num / 3) - 2 for num in numbers])
print(result)