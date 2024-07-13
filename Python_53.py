def add():
    while True:
        try:
            if input("Do you want to continue (Y/N)? ").upper() != 'N':
                x = int(input("Enter the first number: "))
                y = int(input("Enter the second number: "))
                print(x + y)
        except ValueError:
            print("Invalid input. Please enter a valid integer.")