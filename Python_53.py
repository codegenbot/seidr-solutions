```
def add(x: int, y: int):
    while True:
        try:
            return x + y
        except ValueError:
            x = int(input("Please enter a number for x: "))
            y = int(input("Please enter a number for y: "))