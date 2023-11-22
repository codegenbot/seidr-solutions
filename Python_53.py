import sys

def add(x: int, y: int):
    return x + y

x, y = map(int, input().strip().split())

result = add(x, y)
print(result)