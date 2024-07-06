import sys


def get_input():
    return int(sys.stdin.readline())


# Accept user input for x and y
x = get_input()
y = get_input()

# Call the add function with the input values
result = add(x, y)

# Print the result to the console
print("Result:", result)