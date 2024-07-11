```
def add_numbers():
    def add(x, y):
        return x + y

    while True:
        try:
            x = int(input("Enter first number: "))
            if x < 0:
                print("Please enter a positive number.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    while True:
        try:
            y = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    print(add(x, y))