def add(x: int, y: int):
    while True:
        try:
            return x + y
        except ValueError:
            if not (isinstance(x, (int, float)) and isinstance(y, (int, float))):
                print("Both inputs must be numbers")
                x = float(input("Enter a number for x: "))
                y = float(input("Enter a number for y: "))