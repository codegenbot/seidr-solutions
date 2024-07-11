def add():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
        except ValueError:
            print("Invalid input! Please enter a valid integer.")
        else:
            return x + y