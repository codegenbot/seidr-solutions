import sys
numbers = list(map(float, sys.stdin.read().strip().split()))
result = mean_absolute_deviation(numbers)
print(result)