
import sys

def add(x: int, y: int):
    return x + y

# Accept user input for x and y
x = input("Enter x: ")
y = input("Enter y: ")

# Call the add function with the input values
result = add(int(x), int(y))

# Print the result to the console
print("Result:", result)