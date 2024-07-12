while True:
    try:
        n = int(input("Enter an integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")