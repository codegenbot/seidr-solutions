def add(x: int, y: int):
    return x + y


# Prompt the user for input and convert it to integers
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

# Call the add function with the user's input
result = add(a, b)
print(f"{a} + {b} = {result}")