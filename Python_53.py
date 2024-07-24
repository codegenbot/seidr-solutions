```
def add(x: int, y: int):
    return x + y

while True:
    try:
        x = int(input("Enter first integer: "))
        break
    except ValueError:
        print("That's not a valid integer! Try again.")

while True:
    try:
        y = int(input("Enter second integer: "))
        break
    except ValueError:
        print("That's not a valid integer! Try again.")

print(f"The sum of {x} and {y} is {add(x, y)}")