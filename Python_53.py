```
    def add(a, b):
        return a + b

    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            if x >= 0 and y >= 0:
                print(" " * 4 + str(add(x, y)))
                break
            else:
                print("Invalid input. Please enter positive numbers.")
        except ValueError:
            print("Invalid input. Please enter integers.")