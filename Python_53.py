def add(x: int, y: int) -> int:
    return x + y

x, y = map(int, input("Enter x and y: ").split())

result = add(x, y)

print(result)