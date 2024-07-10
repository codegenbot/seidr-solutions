import sys

values = list(map(int, sys.stdin.readline().strip().split()))
result = sum(val * val for val in values)
print(result)