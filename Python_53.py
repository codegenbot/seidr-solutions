import sys


def add(x: int, y: int):
    return x + y


x, y = map(int, sys.stdin.readline().split())

result = add(x, y)
print(result)