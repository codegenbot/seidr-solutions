def add():
    while True:
        try:
            cont = input("Do you want to continue (Y/N)? ").upper()
            if cont != 'N':
                x = int(input("Enter the first number: "))
                y = int(input("Enter the second number: "))
                print(x + y)
                return
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
        if cont == 'N':
            break
    print("Goodbye!")