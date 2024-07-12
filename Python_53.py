def add(x: int, y: int):
    try:
        return x + y
    except TypeError:
        return "Error: Please enter valid integers"