n = None
while n is None:
    try:
        n = int(input("Enter a number: "))
    except ValueError:
        print("Invalid input. Please enter a valid number.")