try:
    n = int(input("Enter a number: "))
    if n <= 0:
        print("Please enter a positive integer.")
    else:
        print(factorize(n))
except ValueError:
    print("Please enter a valid integer.")