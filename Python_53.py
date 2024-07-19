import sys

def add(a, b):
    return a + b

# read input
x, y = map(int, input().split())
result = add(x, y)
print(result)