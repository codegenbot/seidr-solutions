```
def add(a, b):
    return a + b

while True:
    try:
        while True:
            x = int(input("Enter first number: "))
            if x >= 0:
                break
            print("Invalid input. Please enter positive numbers.")
        while True:
            y = int(input("Enter second number: "))
            if y >= 0:
                break
            print("Invalid input. Please enter positive numbers.")
        print(add(x, y))
        break
    except ValueError:
        print("Invalid input. Please enter integers.")