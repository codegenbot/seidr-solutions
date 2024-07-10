import sys

def add(x: int, y: int) -> int:
    return x + y

input_str = sys.stdin.readline().strip()
x, y = map(int, input_str.split())
result = add(x, y)
print(result)