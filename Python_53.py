def add(x: int, y: int) -> int:
    return x + y

x, y = map(int, input("Enter two numbers separated by a space: ").strip().split())

print(add(x, y))