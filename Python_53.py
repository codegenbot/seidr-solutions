def add(x: int, y: int):
    return x + y


x = int(input("Enter first number: "))
y = int(input("Enter second number: "))

if not isinstance(x, int) or not isinstance(y, int):
    raise ValueError("Inputs must be integers")

print(add(x, y))