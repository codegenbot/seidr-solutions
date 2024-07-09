def add(x: int, y: int) -> int:
    try:
        x = int(x)
        y = int(y)
        return x + y
    except ValueError:
        return "Invalid input, please enter integers only"