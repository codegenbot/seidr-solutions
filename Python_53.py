def add_numbers():
    def add(x, y):
        return x + y

    while True:
        try:
            x = int(input("Enter first number: "))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
        else:
            if x < 0:
                print("Please enter a positive number.")
                continue
            break

    while True:
        try:
            y = int(input("Enter second number: "))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
        else:
            break

    print(add(x, y))