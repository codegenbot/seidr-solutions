n = input("Enter a number: ")
try:
    n = int(n)
    print(factorize(n))
except ValueError:
    print("Please enter a valid integer.")