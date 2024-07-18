def add(x: int, y: int) -> int:
    return x + y

x, y = map(int, input("Enter two numbers separated by space: ").split())
result = add(x, y)
print(result)