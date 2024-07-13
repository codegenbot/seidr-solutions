def add():
    while True:
        cont = input("Do you want to continue (Y/N)? ").upper()
        if cont not in ['Y', 'N']:
            print("Invalid input. Please enter Y or N.")
            continue
        if cont != 'N':
            while True:
                try:
                    x = int(input("Enter the first number: "))
                    y = int(input("Enter the second number: "))
                    print(x + y)
                    break
                except ValueError:
                    print("Invalid input. Please enter a valid integer.")
        else:
            return