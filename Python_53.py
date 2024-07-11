def add(x: int, y: int):
    try:
        x = int(x)
        y = int(y)
    except ValueError:
        return "Invalid input. Please enter positive integers."
    if x < 0 or y < 0:
        return -1 * (abs(x) + abs(y))
    elif x >= 0 and y >= 0:
        print("Input")
        return x + y