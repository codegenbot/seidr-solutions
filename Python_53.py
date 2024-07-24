while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Please enter valid integer inputs.")