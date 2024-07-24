while True:
    try:
        n = int(input("Enter a positive number to factorize: ").strip())
        if n <= 0:
            print("Please enter a positive integer.")
        else:
            break
    except ValueError:
        print("Please enter a valid integer.")