```
def add():
    while True:
        try:
            while True:
                choice = input("Do you want to continue (Y/N)? ")
                if choice.upper() != 'Y' and choice.upper() != 'N':
                    raise ValueError('Invalid choice. Please enter Y or N.')
                break
            if choice.upper() == 'N':
                return
            while True:
                try:
                    x = int(input("Enter the first number: "))
                    y = int(input("Enter the second number: "))
                    print(x + y)
                    break
                except ValueError:
                    print("Invalid input. Please enter a valid integer.")
        except ValueError as e:
            print(e)