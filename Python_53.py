```
def add():
    try:
        x = int(input("Enter the first number: "))
        y = int(input("Enter the second number: "))
        return x + y
    except ValueError:
        print("Invalid input. Please enter integers.")
        return None