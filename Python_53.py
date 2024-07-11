def add():
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
    except ValueError:
        return -1 * (abs(x) + abs(y))
    if x < 0 or y < 0:
        return -1 * (abs(x) + abs(y))
    else:
        return x + y