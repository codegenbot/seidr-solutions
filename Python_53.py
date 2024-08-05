def add(x: int, y: int):
    return x + y


# Receive input from user
x, y = map(int, input().split())

# Call the add function with the input values and print the result
print(add(x, y))