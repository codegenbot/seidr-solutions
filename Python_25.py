try:
    n = int(input("Enter a number: ").strip())
    print(factorize(n))
except ValueError:
    print("Please enter a valid integer.")