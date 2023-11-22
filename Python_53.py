import sys

def add(x: int, y: int):
    return x + y

x, y = map(int, sys.stdin.readline().strip().split())

result = add(x, y)
print(result)