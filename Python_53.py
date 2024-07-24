def add_numbers(x=None, y=None):
    print("Please enter two numbers.")
    if x is None:
        x = int(input("Enter first number: "))
    if y is None:
        y = int(input("Enter second number: "))
    return x + y

result = add_numbers(0, 0) if (x is None and y is None) else add_numbers(x, y)
print(result)