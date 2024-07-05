def add(x: int, y: int):
    return x + y


while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        if x > 0 and y > 0:
            print(add(x, y))
            break
        else:
            raise ValueError("Invalid input")
    except ValueError:
        print("Please enter two positive integers separated by a space.")