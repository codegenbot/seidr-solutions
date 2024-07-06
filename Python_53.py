def add(x: int, y: int):
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            return x + y
        except ValueError:
            pass