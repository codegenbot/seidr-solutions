while True:
    try:
        n = int(input("Please enter a positive integer greater than 1: "))
        if n <= 1:
            print("Invalid input. Please enter a positive integer greater than 1.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid positive integer.")