```
try:
    n = int(input("Enter a positive integer: "))
    if n > 0:
        print(factorize(n))
    else:
        print("Invalid input. Please enter a positive integer.")
except ValueError:
    print("Invalid input. Please enter an integer.")