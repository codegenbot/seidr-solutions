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
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

if x < 0 or y < 0:
    print("Please use non-negative numbers.")
else:
    print(add(x, y))