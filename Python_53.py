def add(x: int, y: int):
    return x + y

try:
    x, y = map(int, input().strip().split())
    print(add(x, y))
except (ValueError, EOFError):
    print("Invalid input")