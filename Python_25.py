while True:
    try:
        n = int(input("Enter a positive number to factorize: ").strip())
        if n > 0:
            break
        print("Please enter a positive integer.")
    except ValueError:
        print("Please enter a valid integer.")
return n