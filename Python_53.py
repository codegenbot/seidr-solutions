def add(x: int, y: int):
    return x + y

# Read two numbers from user input
x, y = map(int, input("Enter two numbers separated by space: ").split())

# Call the add function with user input
result = add(x, y)

print("The result of adding", x, "and", y, "is:", result)