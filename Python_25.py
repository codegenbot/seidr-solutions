try:
    n = int(input("Please enter a positive integer: "))
    if n > 0:
        print(factorize(n))
    else:
        print("Please enter a positive integer.")
except ValueError:
    print("Invalid input. Please enter a positive integer.")
except OverflowError:
    print("Input integer is too large.")