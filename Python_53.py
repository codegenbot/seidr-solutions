def add():
    x = int(input("Enter first number: "))
    y = int(input("Enter second number: "))
    try:
        return x + y
    except ValueError:
        return "Error: Please enter valid integers"