```Python
def add():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            result = x + y
            break
        except ValueError:
            print("Invalid input! Please enter a valid integer.")
    return result