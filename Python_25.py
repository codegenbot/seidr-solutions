try:
    n = int(input())
    result = factorize(n)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")