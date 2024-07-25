try:
    n = int(input())
    print(factorize(n))
except ValueError:
    print("Please enter a valid integer.")