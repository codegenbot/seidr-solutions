def add(x: int, y: int):
    while True:
        try:
            return x + y
            break
        except TypeError:
            print("Invalid input! Please enter integers.")
            x = int(input("Enter the first number: "))
            y = int(input("Enter the second number: "))