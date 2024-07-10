```
def add(x: int, y: int):
    return x + y

while True:
    try:
        x = input("Enter first number: ")
        if x.replace('-', '',).replace('.', '').isdigit():
            x = float(x)
        else:
            print("Invalid input. Please enter a number.")
            continue
        y = input("Enter second number: ")
        if y.replace('-', '',).replace('.', '').isdigit():
            y = float(y)
        else:
            print("Invalid input. Please enter a number.")
            break
        print("The sum is: ", add(int(x), int(y)))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")