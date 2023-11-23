def add(x: int, y: int) -> int:
    return x + y

x, y = map(int, input("Enter two integers separated by space: ").split())
print(add(x, y))