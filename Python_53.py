def add(a=None):
    if a is None:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        return x + y
    else:
        return a