def add():
    while True:
        operation = input("Do you want to do addition (Y/N)? ").upper()
        if operation == "N":
            return None
        if operation not in ["Y", "N"]:
            print("Invalid input. Please enter Y or N.")
            continue
        while True:
            try:
                x = int(input("Enter the first number: "))
                y = int(input("Enter the second number: "))
                print(f"The sum is {x + y}")
                cont_again = input("Do you want to add again (Y/N)? ").upper()
                if cont_again != "N":
                    continue
                return 0
            except ValueError:
                print("Invalid input. Please enter a valid integer.")