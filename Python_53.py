def add(x: int, y: int):
    return x + y

x = int(input("Enter first integer: "))
while not isinstance(x, int):
    x = int(input("Please enter an integer value: "))

y = int(input("Enter second integer: "))
while not isinstance(y, int):
    y = int(input("Please enter an integer value: "))

result = add(x, y)
print("Sum of the two integers:", result)