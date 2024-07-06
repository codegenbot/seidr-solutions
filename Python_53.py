```
def add(x: int, y: int):
    while True:
        try:
            x = int(input("Enter first number: "))
            break
        except ValueError:
            pass
    while True:
        try:
            y = int(input("Enter second number: "))
            break
        except ValueError:
            pass
    return x + y