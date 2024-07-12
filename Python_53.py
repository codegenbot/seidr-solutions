```
def add(x: int, y: int):
    while True:
        try:
            return x + y
            break
        except TypeError:
            x = input("Please enter a valid integer for X: ")
            y = input("Please enter a valid integer for Y: ")