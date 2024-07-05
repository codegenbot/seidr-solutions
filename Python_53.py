def add(x: int, y: int):
    return x + y

try:
    x, y = input().strip().split()
    x, y = int(x), int(y)
    print(add(x, y))
except (ValueError, TypeError):
    print("Invalid input")