def add_numbers():
    while True:
        try:
            print("Please enter two numbers.")
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            print(f"The sum of {x} and {y} is {x + y}.")
            cont = input("Do you want to continue calculating? (yes/no): ")
            if cont.lower() != "yes":
                break
        except ValueError:
            print("Invalid input. Please enter a number.")
    print("Calculations are over.")