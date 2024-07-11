def add_numbers():
    def add(x, y):
        return x + y

    while True:
        try:
            x = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    total = 0
    while True:
        try:
            y = int(input("Enter second number: "))
            if y < 0:
                print("Please enter a positive number.")
            else:
                total = add(x, y)
                print(total)
                again = input("Do you want to continue? (y/n): ")
                if again.lower() != "y":
                    break
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")


add_numbers()