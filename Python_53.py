```
def add(x, y):
    return x + y

while True:
    try:
        x = int(input("Enter first number: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

while True:
    try:
        y = float(input("Enter second number: "))  # allow for decimal numbers
        if y < 0:
            print("Please enter a positive number.")
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer or a decimal number.")

print(add(x, y))