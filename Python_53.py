import sys


def add(x: int, y: int):
    return x + y


# Read user input for x and y
x = int(input())
y = int(input())
# Call the add function with the input values
result = add(x, y)
# Print the result to the console
print("Result:", result)