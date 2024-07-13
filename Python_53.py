def add():
    while True:
        try:
            if input("Do you want to continue (Y/N)? ").upper() != 'N':
                x = int(input("Enter the first number: "))
                y = int(input("Enter the second number: "))
                name = input("Enter your name (First and Last): ")
                print(f"Your name is {name} and the sum of numbers is {x + y}")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")