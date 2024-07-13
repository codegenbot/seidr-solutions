```
def add():
    while True:
        try:
            cont = input("Do you want to continue (Y/N)? ").upper()
            if cont not in ['N', 'Y']:
                print("Invalid input. Please enter either Y or N.")
                continue
            if cont != 'N':
                x = int(input("Enter the first number: "))
                y = int(input("Enter the second number: "))
                print(x + y)
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
        if cont == 'N':
            break