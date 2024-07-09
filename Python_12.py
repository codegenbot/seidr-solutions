import sys

strings = sys.stdin.read().strip().splitlines()
result = max(strings, key=len)
print(result)