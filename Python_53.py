import sys


def add(x: int, y: int):
    return x + y


# Accept user input for x and y
try:
    x = int(sys.stdin.readline())
    y = int(sys.stdin.readline())
except ValueError:
    print("Invalid input. Please enter two integers separated by a space.")
    sys.exit(1)

# Call the add function with the input values
result = add(x, y)

# Print the result to the console
print("Result:", result)