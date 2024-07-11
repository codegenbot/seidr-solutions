def add(x, y):
    return x + y


while True:
    try:
        x = int(input("Enter first number: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

while True:
    try:
        y = int(input("Enter second number: "))
        if y != 0:
            break
        else:
            print("Program terminated.")
            exit()
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

print(add(x, y))