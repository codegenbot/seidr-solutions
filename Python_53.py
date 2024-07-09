def add(x: int, y: int) -> int:
    return x + y

x, y = map(int, input("Enter two numbers separated by a space: ").split())

print(add(x, y))