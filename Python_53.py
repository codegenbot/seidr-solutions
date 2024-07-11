def add(x: int, y: int):
    while True:
        try:
            num1 = int(input("Enter first number: "))
            num2 = int(input("Enter second number: "))
            return num1 + num2
        except ValueError:
            print("Invalid input. Please enter an integer.")