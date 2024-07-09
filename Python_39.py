while True:
    try:
        n = int(input("Enter a positive integer value for n: "))
        if n > 0:
            break
        else:
            print("Please enter a positive integer value.")
    except ValueError:
        print("Please enter a valid integer value.")