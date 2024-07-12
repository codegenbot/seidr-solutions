def add(x: int, y: int) -> int:
    return x + y

x = int(input("Enter the first number: ").strip())
y = int(input("Enter the second number: ").strip())
result = add(x, y)
print(result)