import sys

def add(a, b):
    return a + b

x, y = map(int, sys.stdin.readline().strip().split())
result = add(x, y)
print(result)