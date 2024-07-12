def add(x: int, y: int):
    while True:
        try:
            a = int(input("Enter first number: "))
            b = int(input("Enter second number: "))
            return a + b
        except ValueError:
            print("Error: Please enter valid integers")