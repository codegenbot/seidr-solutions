```
def add(x, y):
    try:
        return int(x) + int(y)
    except ValueError:
        return "Error: Input must be an integer."