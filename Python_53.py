def add(x: int, y: int):
    return x + y

x = int(input("Enter first integer: "))
while type(x) is not int:
    x = int(input("Please enter an integer: "))

y = int(input("Enter second integer: "))
while type(y) is not int:
    y = int(input("Please enter an integer: "))

result = add(x, y)
print("Sum of the two integers:", result)