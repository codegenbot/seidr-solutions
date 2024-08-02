def add(x: int, y: int):
    return x + y

x = int(input("Enter the first number (integer): \n"))
y = int(input("Enter the second number (integer): \n"))

result = add(x, y)

print("The result of adding", x, "and", y, "is:", result)