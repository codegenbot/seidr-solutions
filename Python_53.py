import sys

def add(a, b):
    return a + b

x, y = map(int, sys.argv[1:])
result = add(x, y)
print(result)