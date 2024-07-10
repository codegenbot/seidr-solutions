while True:
    try:
        n = int(input("Enter an integer: "))
        if n < 1:
            print("Please enter a positive integer.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")