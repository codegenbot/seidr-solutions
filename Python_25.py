while True:
    try:
        n = int(input("Enter a positive integer greater than 1: "))
        if n <= 1:
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter a positive integer greater than 1.")