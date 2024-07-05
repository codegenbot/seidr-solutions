def add(x: int, y: int):
    return x + y

try:
    x, y = map(int, input().split())
    print(add(x, y))
except ValueError:
    print("Invalid input")