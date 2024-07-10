```
def add(a, b):
    return a + b

while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        print(add(x, y))
        break
    except ValueError:
        print("Invalid input. Please enter integers.")