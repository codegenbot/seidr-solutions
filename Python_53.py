def add():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return x + y