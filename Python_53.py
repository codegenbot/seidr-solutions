```
def add(x: int, y: int):
    while True:
        try:
            x = float(input("Enter a number for x: "))
            y = float(input("Enter a number for y: "))
            return x + y
        except ValueError:
            print("Invalid input. Try again!")