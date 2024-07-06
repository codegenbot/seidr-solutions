```
def add(x: int, y: int):
    while True:
        try:
            x = int(input("Enter the first number: "))
            y = int(input("Enter the second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter integers.")
    return x + y