def add(x: int, y: int) -> int:
    return x + y

x, y = map(int, input("Enter the numbers: ").split())
result = add(x, y)
print(result)