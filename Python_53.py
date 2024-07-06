```
def add(x: int, y: int):
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            break
        except ValueError:
            print("That's not a valid integer!")
    return x + y