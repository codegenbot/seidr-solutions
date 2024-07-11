```
def add(x: int, y: int):
    if x < 0 and y < 0:
        return -1 * (abs(x) + abs(y))
    else:
        return x + y

while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        print(add(x, y))  
        cont = input("Do you want to continue? (y/n): ")
        while cont.lower() not in ['y', 'n']:
            print("Invalid input. Please enter 'y' or 'n'.")
            cont = input("Do you want to continue? (y/n): ")
        if cont.lower() != 'y':
            break
    except ValueError:
        print("Invalid input. Please enter whole numbers.")