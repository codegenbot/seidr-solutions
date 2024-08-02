def add(x: int, y: int):
    return x + y

try:
    x = int(input("Enter the first number: "))
    y = int(input("Enter the second number: "))
except ValueError:
    print("Please enter integer values only")
else:
    result = add(x, y)
    print("The result of adding", x, "and", y, "is:", result)