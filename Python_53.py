```
def add(x: int, y: int):
    try:
        if type(x) != int or type(y) != int:
            return "Error: Please enter valid integers"
        else:
            return x + y
    except TypeError:
        return "Error: Please enter valid integers"