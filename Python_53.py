def add(x: int, y: int):
    while True:
        try:
            x = float(input("Enter a number for x: "))
            y = float(input("Enter a number for y: "))
            break
        except ValueError:
            print("Both inputs must be numbers")
    return x + y