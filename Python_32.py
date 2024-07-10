import sys

values = list(map(int, sys.stdin.readline().strip().split()))
result = 0
for val in values:
    result += val * val
print(result)