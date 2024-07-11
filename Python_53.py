def add(x: int, y: int):
    try:
        x = int(x)
        y = int(y)
    except ValueError:
        return "Invalid input. Please enter positive integers."
    if x < 0 or y < 0:
        return -1 * (abs(x) + abs(y))
    else:
        print("The sum is: ", x+y)
        return x + y