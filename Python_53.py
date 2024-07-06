```
def add(x: int, y: int):
    return x + y

while True:
    while True:
        try:
            x = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    while True:
        try:
            y = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    print(f"The sum of {x} and {y} is: {add(x, y)}")
    break