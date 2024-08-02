def add(x: int, y: int):
    return x + y

# Read input from user
x = int(input("Enter the first number: "))
y = int(input("Enter the second number: "))

# Call the add function with user input
result = add(x, y)

print("The result of adding", x, "and", y, "is:", result)