def add(x: int, y: int):
    while True:
        try:
            result = x + y
            break
        except TypeError:
            print("Error: Please enter valid integers")
            x = input("Enter first integer: ")
            y = input("Enter second integer: ")
            x = int(x)
            y = int(y)