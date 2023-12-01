import sys

def add(x: int, y: int) -> int:
    return x + y


x = int(sys.stdin.readline().strip())
y = int(sys.stdin.readline().strip())
result = add(x, y)
print(result)