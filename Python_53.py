def add():
    while True:
        cont = input("Do you want to continue (Y/N)? ").upper()
        if cont == "N":
            return
        if cont not in ["Y", "N"]:
            print("Invalid input. Please enter Y or N.")
            continue
        while True:
            try:
                x = int(input("Enter the first number: "))
                y = int(input("Enter the second number: "))
                print(f"The sum is {x + y}")
                return
            except ValueError:
                print("Invalid input. Please enter a valid integer.")