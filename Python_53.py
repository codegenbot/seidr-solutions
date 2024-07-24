```
def add(x: int, y: int):
    return x + y

while True:
    try:
        x = int(input("Enter first integer: "))
        y = int(input("Enter second integer: "))
        print(f"The sum of {x} and {y} is {add(x, y)}")
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")