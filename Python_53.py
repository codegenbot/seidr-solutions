def add(x=None, y=None):
    print("Please enter two numbers.")
    if x is None:
        x = int(input("Enter first number: "))
    if y is None:
        y = int(input("Enter second number: "))
    return x + y