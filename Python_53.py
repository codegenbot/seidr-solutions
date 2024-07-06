
def add(x: int, y: int):
    try:
        return x + y
    except ValueError:
        print("Invalid input.")