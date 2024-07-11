```Python
def add(x, y):
    return x + y

while True:
    while True:
        try:
            x = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
    
    while True:
        try:
            y = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    print(f"Result: {add(x, y)}")

    cont = input("Do you want to continue? (y/n): ")
    if cont.lower() != 'y':
        break

print("Program ended.")