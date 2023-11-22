import sys


def add(x: int, y: int):
    return x + y


# Read input from user
x, y = map(int, sys.stdin.readline().split())

result = add(x, y)
print(result)