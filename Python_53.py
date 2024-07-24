def add(x: int, y: int):
    try:
        return x + y
    except ValueError:
        print("Both inputs must be numbers")
        x = float(input("Enter a number for x: "))
        y = float(input("Enter a number for y: "))
        return add(x, y)