def add(x: int, y: int):
    return x + y

try:
    x, y = map(int, input("Enter two integers separated by space: ").strip().split())
    if len([x, y]) != 2:
        raise ValueError
    print(add(x, y))
except ValueError:
    print("Invalid input")