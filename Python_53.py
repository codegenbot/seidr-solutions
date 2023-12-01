def add(x: int, y: int) -> int:
    return x + y


x = int(input("Enter first number: ").strip())
y = int(input("Enter second number: ").strip())
result = add(x, y)
print(result)