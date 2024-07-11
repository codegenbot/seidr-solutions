try:
    n = int(input().strip())
    print(factorize(n))
except ValueError:
    print("Invalid input. Please enter an integer value.")