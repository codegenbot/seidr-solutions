def add(x: int, y: int):
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        return x + y
    except ValueError:
        print("Invalid input! Please enter integers.")