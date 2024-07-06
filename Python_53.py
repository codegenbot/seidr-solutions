def add(x: float, y: float) -> float:
    while True:
        try:
            x = float(input("Enter a number for x: "))
            y = float(input("Enter a number for y: "))
            return x + y
        except ValueError:
            print("Invalid input. Please enter a valid number.")