import sys

values = list(map(int, input().strip().split()))
result = 0
for val in values:
    result += val * val
print(result)