while True:
    try:
        n = int(input("Enter a positive integer greater than 1: "))
        if n <= 1:
            print("Please enter a positive integer greater than 1.")
        else:
            break
    except ValueError:
        print("Please enter a valid positive integer greater than 1.")