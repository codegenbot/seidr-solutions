def add(x: int, y: int):
    if type(x) != int or type(y) != int:
        return "Error: Please enter valid integers"
    else:
        return x + y