import sys

def add(x: int, y: int):
    return x + y

x, y = map(int, [sys.argv[1], sys.argv[2]])

result = add(x, y)
print(result)