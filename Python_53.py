```
def subtract(x: int, y: int):
    return x - y

while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        if y > x:
            print("The difference is: ", subtract(y, x))
        else:
            print("The difference is: ", subtract(x, y))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")