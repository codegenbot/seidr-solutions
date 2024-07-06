import sys


def add(x: int, y: int):
    return x + y


# Accept user input for x and y
x = int(input("Enter X: "))
y = int(input("Enter Y: "))

# Call the add function with the input values
result = add(x, y)

# Print the result to the console
print("Result:", result)