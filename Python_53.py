```
def add():
    while True:
        try:
            x = int(input("Enter first number: "))
            y = int(input("Enter second number: "))
            print("The sum of the two numbers is", x + y)
        except ValueError:
            print("Invalid input! Please enter a valid integer.")