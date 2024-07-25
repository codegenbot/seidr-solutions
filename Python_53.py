import sys

def add(x, y):
    return x + y

x, y = map(int, sys.stdin.readline().strip().split())
result = add(x, y)
print(result)