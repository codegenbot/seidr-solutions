def add(x: int, y: int):
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            if isinstance(x, int) and isinstance(y, int):
                return x + y
        except ValueError:
            print("Invalid input. Please enter integers.")