def add():
    while True and input("Do you want to continue? (y/n):").lower() != 'q':
        try:
            x = int(input("Enter the first number: "))
            y = int(input("Enter the second number: "))
            print(x + y)
        except ValueError:
            print("Invalid input. Please enter a valid integer.")