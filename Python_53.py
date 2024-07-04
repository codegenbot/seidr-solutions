def add(x: int, y: int):
    return x + y

try:
    x, y = map(int, input().strip().split())
    print(add(x, y))
except Exception as e:
    print(f"Invalid input: {e}")