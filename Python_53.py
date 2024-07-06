def add(op: str, x: float, y: float) -> float:
    if op == '+':
        return x + y
    elif op == '-':
        return x - y
    elif op == '/':
        return x / y
    else:
        return x * y

# Get user input for operation
op = input("Enter '+', '-', '/', or '*': ")

# Get user input for numbers
x = float(input("Enter a number for x: "))
y = float(input("Enter a number for y: "))

# Call the `add` function with the user's choice of operation
result = add(op, x, y)
print(f"The sum of {x} and {y} is {result}")