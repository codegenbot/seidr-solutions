def add(x: int, y: int):
    return x + y

x = int(input("Enter first integer: ").strip())
y = int(input("Enter second integer: ").strip())

result = add(x, y)
print("Sum of the two integers:", result)