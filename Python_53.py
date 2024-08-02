def add(x: int, y: int):
    try:
        x = int(x)
        y = int(y)
    except ValueError:
        return "Invalid input. Please enter integers only."

    return x + y

# Read input from user
x = input("Enter the first number: ")
y = input("Enter the second number: ")

# Call the add function with user input
result = add(x, y)

print("The result of adding", x, "and", y, "is:", result)