def add(x: int, y: int):
    while True:
        try:
            return x + y
        except TypeError:
            x = float(input("Enter a number for x: "))
            y = float(input("Enter a number for y: "))