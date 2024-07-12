def add(x: int, y: int):
    try:
        return x + y
    except TypeError as e:
        return "Error: Please enter valid integers"