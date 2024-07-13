def add():
    num_list = []
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
                    num_list.append(x + y)
                    print(f"Sum of {x} and {y} is {x + y}")
                    break
                except ValueError:
                    print("Invalid input. Please enter a valid integer.")
        else:
            return num_list

print(add())